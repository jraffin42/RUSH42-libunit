/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 14:43:50 by schaehun         ###   ########.fr       */
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

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_strlen_launcher();
	error |= bus_error_test_launcher();
	error |= ft_sum_launcher();
	return (error == -1);
}
