/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 11:38:50 by jraffin          ###   ########.fr       */
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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len-- > 0)
		*a++ = c;
	return (b);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    char    c;

    c = '\0';
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (0);
    ft_memset(ptr, c, size * nmemb);
    return (ptr);
}

int	main(void)
{
	if (0
		|| strlen_launcher()
		|| sum_launcher()
	)
		return (1);
}
