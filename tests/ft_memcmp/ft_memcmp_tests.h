/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_tests.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:42 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 19:48:53 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMCMP_TESTS_H
# define FT_MEMCMP_TESTS_H

# include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp_launcher(void);
int	basic_test_1(void);
int	basic_test_2(void);
int	basic_test_3(void);
int	basic_test_4(void);

#endif