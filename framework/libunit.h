/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:52:46 by agautier          #+#    #+#             */
/*   Updated: 2022/01/08 20:02:40 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# define TIMEOUT_IN_SECONDS 10

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
}	t_test;

typedef struct s_unit_test_block
{
	char	*function_name;
	t_test	*current_test;
}	t_unit_test;

int		write_positive_number(size_t n);
char	*result_msg(int wstatus);
int		launch_tests(t_unit_test *tests);

#endif
