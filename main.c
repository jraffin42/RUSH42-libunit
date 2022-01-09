/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 20:57:12 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_bus_error_test.h"
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

int	silly_buserror_function(void)
{
	char	*s;

	s = "abc";
	s[1] = 'd';
	return (0);
}

#include "ft_strlcat_tests.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_strlen_launcher();
	error |= bus_error_test_launcher();
	error |= ft_sum_launcher();
	error |= ft_strlcat_launcher();
	return (error == -1);
}
