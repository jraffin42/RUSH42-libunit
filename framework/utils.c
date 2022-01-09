/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:08:14 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:45:15 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void	write_char_string_stdout(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void	write_positive_number(size_t n)
{
	size_t	div;
	char	c;

	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div >= 10)
	{
		c = (n / div);
		div /= 10;
		write(1, &c, 1);
	}
	c = n + '0';
	write(1, &c, 1);
}

char	*result_msg(int wstatus)
{
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == 0)
			return ("\e[0;92m[OK]\e[0;0m");
		if (WEXITSTATUS(wstatus) == 2)
			return ("\e[0;93m[TIMEOUT]\e[0;0m");
		else
			return ("\e[0;91m[KO]\e[0;0m");
	}
	if (WIFSIGNALED(wstatus))
	{
		if (WTERMSIG(wstatus) == SIGSEGV)
			return ("\e[0;95m[SIGSEGV]\e[0;0m");
		if (WTERMSIG(wstatus) == SIGBUS)
			return ("\e[0;95m[SIGBUS]\e[0;0m");
		if (WTERMSIG(wstatus) == SIGABRT)
			return ("\e[0;95m[SIGABRT]\e[0;0m");
		if (WTERMSIG(wstatus) == SIGFPE)
			return ("\e[0;95m[SIGFPE]\e[0;0m");
		if (WTERMSIG(wstatus) == SIGPIPE)
			return ("\e[0;95m[SIGPIPE]\e[0;0m");
		if (WTERMSIG(wstatus) == SIGILL)
			return ("\e[0;95m[SIGILL]\e[0;0m");
	}
	return ("result error !");
}
