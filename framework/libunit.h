/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:52:46 by agautier          #+#    #+#             */
/*   Updated: 2022/01/09 20:39:24 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
}	t_test;

typedef struct s_unit_test_block
{
	char	*function_name;
	t_test	*test_array;
}	t_unit_test;

void	write_char_string_stdout(const char *str);
int		write_positive_number(size_t n);
char	*result_msg(int wstatus);
int		launch_tests(t_unit_test *tests);

#endif
