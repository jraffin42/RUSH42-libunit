/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bus_error_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:21:59 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 14:42:35 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_bus_error_test.h"

int	bus_error_test(void)
{
	if (silly_buserror_function())
		return (0);
	else
		return (-1);
}
