#include <stdio.h>
#include "ft_str_is_alpha.c"

int	main(int argc, char *argv[])
{
	int	result_int;
	char	*result_str;


	result_int = ft_str_is_alpha(argv[1]);
	/* result_int = ft_str_is_alpha("NoMoreBet"); */
	printf("Int result is : %d\n", result_int);
	result_str = result_int == 1 ? "Yes" : "No";

	printf("Is string contains Alphabet ? : %s", result_str);
	return (0);
}
