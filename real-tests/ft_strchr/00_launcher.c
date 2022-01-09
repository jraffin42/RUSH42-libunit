/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:22 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 18:21:37 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "ft_strchr_tests.h"

int	ft_strchr_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"test_1", &basic_test_1},
		(t_test){"test_2", &basic_test_2},
		(t_test){"test_3", &basic_test_3},
		(t_test){"test_4", &basic_test_4},
		(t_test){"test_5", &basic_test_5},
		(t_test){"test_6", &basic_test_6},
	{NULL}};

	unit_test.function_name = "ft_strchr";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
