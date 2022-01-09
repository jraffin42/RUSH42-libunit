/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:23:22 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 14:21:22 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "tests_bus_error_test.h"

int	bus_error_test_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"BUS ERROR test", &bus_error_test},
	{NULL}};

	unit_test.function_name = "ft_calloc";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
