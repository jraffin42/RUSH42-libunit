/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:27:06 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 12:27:06 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_sum.h"

int	ft_sum_test_3(void)
{
	if (ft_sum(2147483648, 1) == 2147483649)
		return (0);
	else
		return (-1);
}
