/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:15:33 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 16:35:23 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <wait.h>
#include <sys/types.h>
#include "libunit.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	run_a_test(char *func_name, char *test_name, int (*test_func)(void))
{
	int		wstatus;
	char	*result;

	write(1, "\e[0;36m", 7);
	write(1, func_name, ft_strlen(func_name));
	write(1, "\e[0;0m : ", 9);
	write(1, test_name, ft_strlen(test_name));
	if (!fork())
		exit(test_func() == -1);
	wait(&wstatus);
	result = result_msg(wstatus);
	if (write(1, result, ft_strlen(result)) < 0
		|| write (1, "\n", 1) < 0)
		NULL;
	return (!WIFEXITED(wstatus) || WEXITSTATUS(wstatus));
}

int	launch_tests(t_unit_test *tests)
{
	t_test	*current_test;
	size_t	total_tests;
	size_t	succeeded_tests;

	total_tests = 0;
	succeeded_tests = 0;
	write(1, "\n", 1);
	current_test = tests->test_array;
	while (current_test->name)
	{
		total_tests++;
		succeeded_tests += !run_a_test(tests->function_name,
				current_test->name, current_test->func);
		current_test++;
	}
	if (write_positive_number(succeeded_tests) < 0 || write(1, "/", 1) < 0
		|| write_positive_number(total_tests) < 0
		|| write(1, " tests checked\n", 15) < 0)
		NULL;
	if (succeeded_tests < total_tests)
		return (-1);
	return (0);
}
