/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:22:33 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:04:25 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strjoin_tests.h"

int	ft_strjoin_basic_test_3(void)
{
	if (ft_memcmp(ft_strjoin("", "emptyleft"), "emptyleft", 9) == 0)
		return (0);
	else
		return (-1);
}
