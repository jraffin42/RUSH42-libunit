/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 12:44:04 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_strlen.h"

int	ft_strlen_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"Basic test", &ft_strlen_basic_test},
		(t_test){"NULL test", &ft_strlen_null_test},
	{NULL}};

	unit_test.function_name = "ft_strlen";
	unit_test.current_test = test_list;
	return (launch_tests(&unit_test));
}
