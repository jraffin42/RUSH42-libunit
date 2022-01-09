/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:34:05 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libunit_bonus.h"
#include "ft_sqrt_tests.h"

int	ft_sqrt_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"basic test", &ft_sqrt_basic_test, NULL},
		(t_test){"big value test", &ft_sqrt_big_value_test, NULL},
		(t_test){NULL, NULL, NULL}
	};

	unit_test.function_name = "ft_sqrt";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
