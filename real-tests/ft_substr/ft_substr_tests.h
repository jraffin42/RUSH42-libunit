/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_tests.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:42 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 19:15:50 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUBSTR_TESTS_H
# define FT_SUBSTR_TESTS_H

# include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_substr_launcher(void);
int		basic_test_1(void);
int		basic_test_2(void);
int		basic_test_3(void);
int		basic_test_4(void);
int		basic_test_5(void);
int		basic_test_6(void);
int		basic_test_7(void);

#endif