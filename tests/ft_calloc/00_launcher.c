/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:23:22 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 12:43:29 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_calloc.h"

int	ft_calloc_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"BUS ERROR", &ft_calloc_test_01},
	{NULL}};

	unit_test.function_name = "ft_calloc";
	unit_test.current_test = test_list;
	return (launch_tests(&unit_test));
}
