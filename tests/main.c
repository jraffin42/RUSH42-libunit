/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 14:51:34 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_strlen_launcher();
	error |= bus_error_test_launcher();
	error |= ft_sum_launcher();
	return (error == -1);
}
