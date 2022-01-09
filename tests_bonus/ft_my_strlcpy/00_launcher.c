/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:48:46 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:22:39 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libunit_bonus.h"
#include "ft_my_strlcpy_tests.h"

int	ft_my_strlcpy_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"OK test", &ft_my_strlcpy_ok_test, NULL},
		(t_test){"KO test", &ft_my_strlcpy_ko_test, NULL},
		(t_test){"SIGSEGV test", &ft_my_strlcpy_sigsegv_test, NULL},
		(t_test){"SIGBUS test", &ft_my_strlcpy_sigbus_test, NULL},
		(t_test){NULL, NULL, NULL}
	};

	unit_test.function_name = "ft_my_strlcpy";
	unit_test.test_array = test_list;
	return (launch_tests(&unit_test));
}
