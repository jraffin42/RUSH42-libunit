/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_strlen.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:04:25 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/08 19:01:50 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_STRLEN_H
# define TESTS_STRLEN_H

# include <stddef.h>

size_t	ft_strlen(const char *str);

int		strlen_launcher(void);
int		strlen_basic_test(void);
int		strlen_null_test(void);
int		strlen_non_null_terminated_test(void);

#endif
