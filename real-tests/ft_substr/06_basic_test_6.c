/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_basic_test_6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 19:12:17 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_tests.h"

int	basic_test_6(void)
{
	if (ft_memcmp(ft_substr("best place", 4, 6), " place", 6) == 0)
		return (0);
	else
		return (-1);
}
