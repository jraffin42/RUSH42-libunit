/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_tests.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:42 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/10 00:09:58 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRJOIN_TESTS_H
# define FT_STRJOIN_TESTS_H

# include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strjoin(char const *s1, char const *s2);

int		ft_strjoin_launcher(void);
int		ft_strjoin_basic_test_1(void);
int		ft_strjoin_basic_test_2(void);
int		ft_strjoin_basic_test_3(void);
int		ft_strjoin_basic_test_4(void);
int		ft_strjoin_basic_test_5(void);
int		ft_strjoin_basic_test_6(void);
int		ft_strjoin_basic_test_7(void);

#endif
