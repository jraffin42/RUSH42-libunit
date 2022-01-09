/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ko_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:05:20 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:26:32 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mystrlcpy_tests.h"

int	ft_mystrlcpy_ko_test(void)
{
	char	str[20];

	if (ft_mystrlcpy(str, "Ceci est une chaîne de test.", 20) == 29)
		return (0);
	else
		return (-1);
}
