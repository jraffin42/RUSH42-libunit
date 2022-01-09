/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 12:58:54 by jraffin          ###   ########.fr       */
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
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
