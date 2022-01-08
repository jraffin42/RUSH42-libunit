/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:15:33 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/08 18:56:47 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
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

static char	*result_msg(int wstatus)
{
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == EXIT_SUCCESS)
			return ("\e[0;92m[OK]\e[0;0m");
		if (WEXITSTATUS(wstatus) == 2)
			return ("\e[0;33m[TIMEOUT]\e[0;0m");
		return ("\e[0;91m[KO]\e[0;0m");
	}
	if (!WIFSIGNALED(wstatus))
		return ("");
	if (WTERMSIG(wstatus) == SIGSEGV)
		return ("\e[0;35m[SIGSEGV]\e[0;0m");
	if (WTERMSIG(wstatus) == SIGBUS)
		return ("\e[0;35m[SIGBUS]\e[0;0m");
	if (WTERMSIG(wstatus) == SIGABRT)
		return ("\e[0;35m[SIGABRT]\e[0;0m");
	if (WTERMSIG(wstatus) == SIGFPE)
		return ("\e[0;35m[SIGFPE]\e[0;0m");
	if (WTERMSIG(wstatus) == SIGPIPE)
		return ("\e[0;35m[SIGPIPE]\e[0;0m");
	if (WTERMSIG(wstatus) == SIGILL)
		return ("\e[0;35m[SIGILL]\e[0;0m");
	return ("result");
}

static void	timeout_routine(void)
{
	sleep(TIMEOUT_IN_SECONDS);
	exit(2);
}

static int	run_a_test(char *func_name, char *test_name, int (*test_func)(void))
{
	pthread_t	timeout_thread;
	int			wstatus;
	char		*result;

	if (write(1, "\e[0;36m", 7) < 0
		|| write(1, func_name, ft_strlen(func_name)) < 0
		|| write(1, "\e[0;0m : ", 9) < 0
		|| write(1, test_name, ft_strlen(test_name)) < 0
		|| write(1, " : ", 3) < 0)
		NULL;
	if (!fork())
	{
		pthread_create(&timeout_thread, NULL, &timeout_routine, NULL);
		exit(test_func() == -1);
	}
	wait(&wstatus);
	result = result_msg(wstatus);
	if (write(1, result, ft_strlen(result)) < 0
		|| write (1, "\n", 1) < 0)
		NULL;
	return (!WIFEXITED(wstatus) || WEXITSTATUS(wstatus));
}

int	launch_tests(t_unit_test *tests)
{
	size_t	total_tests;
	size_t	succeeded_tests;

	total_tests = 0;
	succeeded_tests = 0;
	while (tests->current_test)
	{
		total_tests++;
		succeeded_tests += !run_a_test(tests->function_name,
				tests->current_test->name, tests->current_test->func);
	}
	if (succeeded_tests < total_tests)
		return (-1);
	return (0);
}
