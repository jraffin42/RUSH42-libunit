/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 16:50:09 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char	*ret;

	ret = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}

int	process(void)
{
	char	*str = "toto";

	ft_strcpy(str, "pouet");
	return (!str);
}

int	main(void)
{
	int	wstatus;

	if (!fork())
		exit(process());
	wait(&wstatus);
	if (WIFEXITED(wstatus))
	{
		write (1, "EXIT !\n", 7);
		return (WEXITSTATUS(wstatus));
	}
	if (WIFSIGNALED(wstatus))
	{
		write (1, "SIGNALED !\n", 11);
		return (WTERMSIG(wstatus));
	}
}
