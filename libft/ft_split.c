/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:45:02 by jraffin           #+#    #+#             */
/*   Updated: 2021/08/25 05:16:09 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	free_and_null_after_n(char ***strarrayptr, size_t n)
{
	n++;
	while ((*strarrayptr)[n])
	{
		free((*strarrayptr)[n]);
		n++;
	}
	free(*strarrayptr);
	*strarrayptr = NULL;
}

static void	buildarray(char ***strarrayptr, char const *s, char c, size_t n)
{
	char	*endofword;

	while (*s && *s == c)
		s++;
	if (*s)
	{
		endofword = ft_strchrnul(s, c);
		buildarray(strarrayptr, endofword, c, n + 1);
		if (*strarrayptr)
		{
			(*strarrayptr)[n] = ft_strndup(s, endofword - s);
			if (!(*strarrayptr)[n])
				free_and_null_after_n(strarrayptr, n);
		}
	}
	else
	{
		*strarrayptr = malloc(sizeof(char *) * (n + 1));
		if (*strarrayptr)
			(*strarrayptr)[n] = NULL;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strarray;

	if (!s)
		return (NULL);
	buildarray(&strarray, s, c, 0);
	return (strarray);
}
