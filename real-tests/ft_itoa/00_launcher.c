/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:22 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:23:49 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "ft_itoa_tests.h"

int	ft_itoa_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"basic_test_1", &ft_itoa_basic_test_1},
		(t_test){"basic_test_2", &ft_itoa_basic_test_2},
		(t_test){"basic_test_3", &ft_itoa_basic_test_3},
		(t_test){"basic_test_4", &ft_itoa_basic_test_4},
		(t_test){"basic_test_5", &ft_itoa_basic_test_5},
		(t_test){"basic_test_6", &ft_itoa_basic_test_6},
		(t_test){"basic_test_7", &ft_itoa_basic_test_7},
		(t_test){NULL, NULL}
	};

	unit_test.function_name = "ft_itoa";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
