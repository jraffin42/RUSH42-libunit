/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_tests.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:14:42 by schaehun          #+#    #+#             */
/*   Updated: 2022/01/09 21:01:11 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRLCAT_TESTS_H
# define FT_STRLCAT_TESTS_H

# include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_strlcat_launcher(void);
int		basic_test_1(void);
int		basic_test_2(void);
int		basic_test_3(void);
int		basic_test_4(void);

#endif