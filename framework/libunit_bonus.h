/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:52:46 by agautier          #+#    #+#             */
/*   Updated: 2022/01/09 22:27:03 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H

# define TIMEOUT_IN_SECONDS 3
# define READ_BUFFER_SIZE 4096

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
	char	*ref_filename;
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
int		diff_output_with_file(
			int output_fd, char *func_name, char *ref_filename);

#endif
