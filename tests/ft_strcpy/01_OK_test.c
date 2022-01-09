/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_OK_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:05:20 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 16:34:29 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_strcpy.h"

int	ft_strcpy_ok_test(void)
{
	char	str1 = "Ceci est une chaîne de test."
	char	str2 = "Ceci est une chaîne de test."
	if (ft_strcpy(str1, str2) == 29)
		return (0);
	else
		return (-1);
}
