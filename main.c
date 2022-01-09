/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 15:56:56 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <wait.h>
#include <stdlib.h>

int	process(void)
{
	size_t	size;
	void	*ptr;

	size = -1;
	size /= size + 1;
	ptr = malloc(size);
	free(ptr);
	return (!ptr);
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
