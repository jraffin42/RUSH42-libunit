/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_basic_test_8.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:26:32 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 23:53:44 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_tests.h"

int	ft_atoi_basic_test_8(void)
{
	if (ft_atoi("00000100042") == 100042)
		return (0);
	else
		return (-1);
}
