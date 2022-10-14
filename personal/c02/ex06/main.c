#include <stdio.h>
#include "ft_str_is_printable.c"

void	test_by_string(char *p_str)
{
	int	result;

	result = ft_str_is_printable(p_str);
	printf("String %s : is_printable ? %d\n", p_str, result);
}

int	main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		test_by_string(argv[i]);
	}

	/* test_by_string("%"); */
	/* test_by_string("^"); */
	/* test_by_string("A"); */
	/* test_by_string("*"); */
	/* test_by_string("@"); */
	/* test_by_string("พ"); */
	return (0);
}
