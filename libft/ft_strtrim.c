/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 07:15:19 by jraffin           #+#    #+#             */
/*   Updated: 2021/08/23 06:04:19 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	while (*s1 && ft_strchr(set, (int)*s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, (int)s1[len - 1]))
		len--;
	return (ft_strndup(s1, len));
}
