/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:15:33 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:05:02 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include "libunit.h"

static int	run_a_test(char *func_name, char *test_name, int (*test_func)(void))
{
	int		wstatus;

	write_char_string_stdout("\e[0;36m");
	write_char_string_stdout(func_name);
	write_char_string_stdout("\e[0;0m : ");
	write_char_string_stdout(test_name);
	write_char_string_stdout(" : ");
	if (!fork())
		exit(test_func());
	wait(&wstatus);
	write_char_string_stdout(result_msg(wstatus));
	return (!WIFEXITED(wstatus) || WEXITSTATUS(wstatus));
}

int	launch_tests(t_unit_test *tests)
{
	t_test	*current_test;
	size_t	total_tests;
	size_t	succeeded_tests;

	total_tests = 0;
	succeeded_tests = 0;
	write_char_string_stdout("\n");
	current_test = tests->test_array;
	while (current_test->name)
	{
		total_tests++;
		succeeded_tests += !run_a_test(tests->function_name,
				current_test->name, current_test->func);
		current_test++;
	}
	write_positive_number(succeeded_tests);
	write_char_string_stdout("/");
	write_positive_number(total_tests);
	write_char_string_stdout(" tests checked\n");
	if (succeeded_tests < total_tests)
		return (-1);
	return (0);
}
