/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 08:36:15 by jraffin           #+#    #+#             */
/*   Updated: 2021/04/12 04:57:27 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dst)
		ft_strcpy(dst, s);
	return (dst);
}
