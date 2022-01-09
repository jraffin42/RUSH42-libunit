#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_sum.h"

int	sum_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"Basic test", &sum_test_1},
		(t_test){"NULL test", &sum_test_2},
		(t_test){"Bigger string test", &sum_test_3},
		(t_test){NULL, NULL}
};

	unit_test.function_name = "ft_sum";
	unit_test.current_test = test_list;
	return (launch_tests(&unit_test));
}
