/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/10 00:37:04 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libunit_bonus.h"
#include "ft_putnbr_tests.h"

int	ft_putnbr_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"wrong output test", &ft_putnbr_wrong_output_test, "01.txt"},
		(t_test){NULL, NULL, NULL}
	};

	unit_test.function_name = "ft_putnbr";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
