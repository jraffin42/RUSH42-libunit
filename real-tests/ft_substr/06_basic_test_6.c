/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_basic_test_6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:05:50 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_substr_tests.h"

int	ft_substr_basic_test_6(void)
{
	if (ft_memcmp(ft_substr("best place", 4, 6), " place", 6) == 0)
		return (0);
	else
		return (-1);
}
