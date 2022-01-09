/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_strlcpy_tests.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:51 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 21:10:10 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MY_STRLCPY_TESTS_H
# define FT_MY_STRLCPY_TESTS_H

# include <stddef.h>

size_t	ft_my_strlcpy(char *dst, const char *src, size_t size);

int		ft_my_strlcpy_launcher(void);
int		ft_my_strlcpy_ok_test(void);
int		ft_my_strlcpy_ko_test(void);
int		ft_my_strlcpy_sigsegv_test(void);
int		ft_my_strlcpy_sigbus_test(void);

#endif
