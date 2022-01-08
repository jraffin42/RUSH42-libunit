/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_non_null_terminated_test.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:18:02 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/08 19:03:46 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_strlen.h"

int	strlen_non_null_terminated_test(void)
{
	char	str[1];

	str[0] = 'X';
	if (ft_strlen(str) == 1)
		return (0);
	else
		return (-1);
}
