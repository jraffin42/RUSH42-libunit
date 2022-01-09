/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:03:38 by jraffin           #+#    #+#             */
/*   Updated: 2022/01/10 00:28:45 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_atoi/ft_atoi_tests.h"
#include "../ft_isprint/ft_isprint_tests.h"
#include "../ft_isalnum/ft_isalnum_tests.h"
#include "../ft_itoa/ft_itoa_tests.h"
#include "../ft_strtrim/ft_strtrim_tests.h"
#include "../ft_isalpha/ft_isalpha_tests.h"
#include "../ft_memcmp/ft_memcmp_tests.h"
#include "../ft_substr/ft_substr_tests.h"
#include "../ft_isascii/ft_isascii_tests.h"
#include "../ft_strchr/ft_strchr_tests.h"
#include "../ft_tolower/ft_tolower_tests.h"
#include "../ft_isdigit/ft_isdigit_tests.h"
#include "../ft_strjoin/ft_strjoin_tests.h"
#include "../ft_toupper/ft_toupper_tests.h"

int	main(void)
{
	int	error;

	error = 0;
	error |= ft_atoi_launcher();
	error |= ft_isalpha_launcher();
	error |= ft_isdigit_launcher();
	error |= ft_itoa_launcher();
	error |= ft_strchr_launcher();
	error |= ft_substr_launcher();
	error |= ft_toupper_launcher();
	error |= ft_isalnum_launcher();
	error |= ft_isascii_launcher();
	error |= ft_isprint_launcher();
	error |= ft_memcmp_launcher();
	error |= ft_strjoin_launcher();
	error |= ft_strtrim_launcher();
	error |= ft_tolower_launcher();
	return (error);
}
