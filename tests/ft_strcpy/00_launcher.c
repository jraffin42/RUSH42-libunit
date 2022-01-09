/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 16:34:31 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_strcpy.h"
#include "libunit.h"

int	ft_strcpy_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"OK test", &ft_strcpy_ok_test},
		(t_test){"KO test", &ft_strcpy_ko_test},
		(t_test){"SIGSEGV test", &strcpy_basic_test},
		(t_test){"SIGBUS test", &ft_strlen_null_test},
	{NULL}};

	unit_test.function_name = "ft_strlen";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
