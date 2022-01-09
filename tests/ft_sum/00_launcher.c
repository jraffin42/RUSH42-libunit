/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:27:49 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 12:44:14 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_sum.h"

int	ft_sum_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"Basic test", &ft_sum_test_1},
		(t_test){"NULL test", &ft_sum_test_2},
		(t_test){"Bigger string test", &ft_sum_test_3},
	{NULL}};

	unit_test.function_name = "ft_sum";
	unit_test.current_test = test_list;
	return (launch_tests(&unit_test));
}
