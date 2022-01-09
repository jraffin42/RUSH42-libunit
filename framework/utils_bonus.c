/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:55:53 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:28:34 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include "libunit_bonus.h"

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1) < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

static size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	while (i < size && dst[i])
		i++;
	srclen = ft_strlcpy(dst + i, src, size - i);
	return (srclen + i);
}

static int	memdiff(char *buf1, size_t len1, char *buf2, size_t len2)
{
	if (len1 != len2)
		return (1);
	while (len1 && buf1[len1] == buf2[len1])
		len1--;
	return (!!len1);
}

int	diff_output_with_file(int output_fd, char *func_name, char *ref_filename)
{
	int		ref_fd;
	char	outputbuf[READ_BUFFER_SIZE];
	char	refbuf[READ_BUFFER_SIZE];
	char	path[PATH_MAX];
	int		diff_read[3];

	if (!ref_filename || !*ref_filename)
		return (0);
	path[0] = '\0';
	ft_strlcat(path, func_name, PATH_MAX);
	ft_strlcat(path, "/", PATH_MAX);
	ft_strlcat(path, ref_filename, PATH_MAX);
	ref_fd = open(path, O_RDONLY);
	diff_read[0] = 0;
	diff_read[1] = read(output_fd, outputbuf, READ_BUFFER_SIZE);
	diff_read[2] = read(ref_fd, refbuf, READ_BUFFER_SIZE);
	while (!diff_read[0] && diff_read[1] > 0 && diff_read[2] > 0)
	{
		diff_read[0] = memdiff(outputbuf, diff_read[1], refbuf, diff_read[2]);
		diff_read[1] = read(output_fd, outputbuf, READ_BUFFER_SIZE);
		diff_read[2] = read(ref_fd, refbuf, READ_BUFFER_SIZE);
	}
	close(output_fd);
	return (diff_read[0]);
}
