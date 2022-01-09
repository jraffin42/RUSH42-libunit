/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_sigbus_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:13:42 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:25:53 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mystrlcpy_tests.h"

int	ft_mystrlcpy_sigbus_test(void)
{
	char	*str;

	str = "Ceci est une chaîne non modifiable.";
	if (ft_mystrlcpy(str, "Ceci est une chaîne de test.", 37) == 29)
		return (0);
	else
		return (-1);
}
