/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_basic_test_6.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:26:32 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 23:53:32 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi_tests.h"

int	ft_atoi_basic_test_6(void)
{
	if (ft_atoi("-42a42") == -42)
		return (0);
	else
		return (-1);
}
