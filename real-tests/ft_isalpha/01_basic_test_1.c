/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:00:20 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha_tests.h"

int	ft_isalpha_basic_test_1(void)
{
	if (ft_isalpha('4') == 0)
		return (0);
	else
		return (-1);
}
