/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:02:34 by jraffin           #+#    #+#             */
/*   Updated: 2021/06/22 18:31:17 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static ssize_t	gnl(int fd, char **str, size_t depth)
{
	char	c;
	size_t	rsize;
	size_t	ret;

	if (!str)
		return (-1);
	rsize = read(fd, &c, 1);
	if ((rsize == 1 && c == '\n') || (rsize == 0 && depth))
	{
		*str = malloc(sizeof(char) * (depth + 1));
		if (!*str)
			return (-1);
		(*str)[depth] = '\0';
		return (1);
	}
	else if (rsize == 1)
	{
		ret = gnl(fd, str, (depth + 1));
		if (*str)
			(*str)[depth] = c;
		return (ret);
	}
	else if (rsize == 0)
		return (0);
	return (-1);
}

ssize_t	ft_get_next_line(int fd, char **line)
{
	return (gnl(fd, line, 0));
}
