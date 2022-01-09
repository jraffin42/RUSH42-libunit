/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ft_strlen.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaehun <schaehun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:04:25 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/09 12:30:42 by schaehun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_FT_STRLEN_H
# define TESTS_FT_STRLEN_H

# include <stddef.h>

size_t	ft_strlen(const char *str);

int		ft_strlen_launcher(void);
int		ft_strlen_basic_test(void);
int		ft_strlen_null_test(void);

#endif
