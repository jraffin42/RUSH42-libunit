/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 22:32:46 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_my_strlcpy_tests.h"
#include "ft_sqrt_tests.h"
#include "ft_putnbr_tests.h"

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_my_strlcpy_launcher();
	error |= ft_sqrt_launcher();
	error |= ft_putnbr_launcher();
	return (error);
}
