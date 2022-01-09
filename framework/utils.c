/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:08:14 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/08 19:37:22 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <wait.h>

char	*result_msg(int wstatus)
{
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == 0)
			return ("\e[0;92m[OK]\e[0;0m");
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

int	write_positive_number(size_t n)
{
	size_t	div;
	char	c;

	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div > 9)
	{
		c = (n / div);
		n -= c * div;
		c += '0';
		if (write(1, &c, 1) < 0)
			return (-1);
	}
	c = n + '0';
	write(1, &c, 1);
	return (0);
}
