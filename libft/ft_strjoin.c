/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 06:59:42 by jraffin           #+#    #+#             */
/*   Updated: 2020/11/20 12:04:01 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*str;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (0);
	str[len1 + len2] = '\0';
	while (len2 > 0)
	{
		len2--;
		str[len1 + len2] = s2[len2];
	}
	while (len1 > 0)
	{
		len1--;
		str[len1] = s1[len1];
	}
	return (str);
}
