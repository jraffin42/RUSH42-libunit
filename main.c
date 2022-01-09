/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 12:42:18 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_calloc.h"
#include "tests_ft_strlen.h"
#include "tests_ft_sum.h"
#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_sum(size_t x, size_t y)
{
	size_t	z;

	z = x + y;
	return (z);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	long long int	*ptr;
	size_t			len;

	len = nmemb * size;
	ptr = malloc(len);
	if (!ptr)
		return (0);
	while (len--)
		ptr[len] = 0;
	return (ptr);
}

int	main(void)
{
	if (0
		|| ft_strlen_launcher()
		|| ft_calloc_launcher()
		|| ft_sum_launcher()
	)
		return (1);
}
