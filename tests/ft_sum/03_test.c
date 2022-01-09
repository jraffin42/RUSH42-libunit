#include "tests_ft_sum.h"

int	sum_test_3(void)
{
	if (ft_sum(2147483648, 1) == 2147483649)
		return (0);
	else
		return (-1);
}
