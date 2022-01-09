/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:23:22 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 13:07:29 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_calloc.h"

int	ft_calloc_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"BUS ERROR test", &ft_calloc_test_01},
	{NULL}};

	unit_test.function_name = "ft_calloc";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
