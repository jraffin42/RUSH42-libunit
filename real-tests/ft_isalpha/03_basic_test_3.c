/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:00:30 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha_tests.h"

int	ft_isalpha_basic_test_3(void)
{
	if (ft_isalpha('a') == 1)
		return (0);
	else
		return (-1);
}