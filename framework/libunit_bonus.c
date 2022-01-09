/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:15:33 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:47:11 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <pthread.h>
#include <limits.h>
#include "libunit_bonus.h"

static void	*timeout_thread_routine(void *ptr)
{
	sleep(TIMEOUT_IN_SECONDS);
	exit(2);
	return (ptr);
}

static int	check_result(int diff, int wstatus)
{
	if (diff)
	{
		write_char_string_stdout("[WRONG OUTPUT]\n");
		return (1);
	}
	write_char_string_stdout(result_msg(wstatus));
	write_char_string_stdout("\n");
	return (!WIFEXITED(wstatus) || WEXITSTATUS(wstatus));
}

static int	run_a_test(char *func_name, t_test *test)
{
	int			wstatus;
	pthread_t	timeout_thread;
	int			pipe_fds[2];
	int			diff;

	write_char_string_stdout("\e[0;36m");
	write_char_string_stdout(func_name);
	write_char_string_stdout("\e[0;0m : ");
	write_char_string_stdout(test->name);
	write_char_string_stdout(" : ");
	pipe(pipe_fds);
	if (!fork())
	{
		dup2(pipe_fds[1], STDOUT_FILENO);
		close(pipe_fds[0]);
		close(pipe_fds[1]);
		pthread_create(&timeout_thread, NULL, &timeout_thread_routine, NULL);
		exit(test->func());
	}
	close(pipe_fds[1]);
	wait(&wstatus);
	diff = diff_output_with_file(pipe_fds[0], func_name, test->ref_filename);
	return (check_result(diff, wstatus));
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
		succeeded_tests += !run_a_test(tests->function_name, current_test);
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
