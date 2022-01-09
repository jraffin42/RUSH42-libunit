/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 23:22:33 by jraffin           #+#    #+#             */
/*   Updated: 2020/11/20 19:57:53 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	ptr = str;
	while (*s && len > 0)
	{
		*ptr = *s;
		ptr++;
		s++;
		len--;
	}
	*ptr = '\0';
	return (str);
}
