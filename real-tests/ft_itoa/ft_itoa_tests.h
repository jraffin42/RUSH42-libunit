/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_tests.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:42 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:08:40 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ITOA_TESTS_H
# define FT_ITOA_TESTS_H

# include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_itoa(int c);

int		ft_itoa_launcher(void);
int		ft_itoa_basic_test_1(void);
int		ft_itoa_basic_test_2(void);
int		ft_itoa_basic_test_3(void);
int		ft_itoa_basic_test_4(void);
int		ft_itoa_basic_test_5(void);
int		ft_itoa_basic_test_6(void);
int		ft_itoa_basic_test_7(void);

#endif
