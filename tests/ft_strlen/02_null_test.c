/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:18:02 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/08 19:03:57 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests_ft_strlen.h"

int	strlen_null_test(void)
{
	if (ft_strlen(NULL) == 0)
		return (0);
	else
		return (-1);
}
