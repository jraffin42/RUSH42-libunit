/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_basic_test_7.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 17:49:14 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_itoa_tests.h"

int	basic_test_7(void)
{
	if (ft_memcmp(ft_itoa(-1), "-1", 2) == 0)
		return (0);
	else
		return (-1);
}
