/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 19:48:35 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcmp_tests.h"

int	basic_test_4(void)
{
	if (ft_memcmp("a", "b", 1) == -1)
		return (0);
	else
		return (-1);
}
