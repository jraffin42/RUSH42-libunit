/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_OK_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:05:20 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:37:19 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_my_strlcpy_tests.h"

int	ft_my_strlcpy_ok_test(void)
{
	char	str[100];

	if (ft_my_strlcpy(str, "Ceci est une chaîne de test.", 100) == 29)
		return (0);
	else
		return (-1);
}
