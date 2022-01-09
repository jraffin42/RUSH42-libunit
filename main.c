/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:47:48 by schaehun         ###   ########.fr       */
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

#include "ft_memcmp_tests.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	unsigned char			*str1;
	unsigned char			*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_strlen_launcher();
	error |= bus_error_test_launcher();
	error |= ft_sum_launcher();
	error |= ft_memcmp_launcher();
	return (error == -1);
}
