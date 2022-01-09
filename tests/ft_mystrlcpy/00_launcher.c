/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:27:17 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libunit.h"
#include "ft_mystrlcpy_tests.h"

int	ft_mystrlcpy_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"OK test", &ft_mystrlcpy_ok_test},
		(t_test){"KO test", &ft_mystrlcpy_ko_test},
		(t_test){"SIGSEGV test", &ft_mystrlcpy_sigsegv_test},
		(t_test){"SIGBUS test", &ft_mystrlcpy_sigbus_test},
		(t_test){NULL, NULL}
	};

	unit_test.function_name = "ft_mystrlcpy";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
