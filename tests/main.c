/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:38:18 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_my_strlcpy_tests.h"

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_my_strlcpy_launcher();
	return (error);
}
