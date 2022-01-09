/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_basic_test_6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 18:34:40 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin_tests.h"

int	basic_test_6(void)
{
	if (ft_memcmp(ft_strjoin("a  a aa", "  a a a"), "a  a aa  a a a", 14) == 0)
		return (0);
	else
		return (-1);
}
