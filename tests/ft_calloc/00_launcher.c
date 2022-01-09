#include <stdlib.h>
#include "libunit.h"
#include "tests_ft_calloc.h"

int	strlen_launcher(void)
{
	t_unit_test		unit_test;
	static t_test	test_list[] = {
		(t_test){"BUS ERROR", &calloc_test_01},
//		(t_test){"NULL test", &strlen_null_test},
//		(t_test){"Non NULL terminated test", &strlen_non_null_terminated_test},
		(t_test){NULL, NULL}
};

	unit_test.function_name = "ft_strlen";
	unit_test.current_test = test_list;
	return (launch_tests(&unit_test));
}
