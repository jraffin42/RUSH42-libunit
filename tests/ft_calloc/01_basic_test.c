#include "tests_ft_calloc.h"

int	strlen_basic_test(void)
{
	if (ft_calloc(-1, 4))
		return (0);
	else
		return (-1);
}
