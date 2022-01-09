/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mystrlcpy_tests.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:51 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 19:25:44 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MYSTRLCPY_TESTS_H
# define FT_MYSTRLCPY_TESTS_H

# include <stddef.h>

size_t	ft_mystrlcpy(char *dst, const char *src, size_t size);

int		ft_mystrlcpy_launcher(void);
int		ft_mystrlcpy_ok_test(void);
int		ft_mystrlcpy_ko_test(void);
int		ft_mystrlcpy_sigsegv_test(void);
int		ft_mystrlcpy_sigbus_test(void);

#endif
