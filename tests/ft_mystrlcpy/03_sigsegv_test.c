/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_sigsegv_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:05:20 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:25:59 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mystrlcpy_tests.h"

int	ft_mystrlcpy_sigsegv_test(void)
{
	if (ft_mystrlcpy(0, 0, 100) == 29)
		return (0);
	else
		return (-1);
}
