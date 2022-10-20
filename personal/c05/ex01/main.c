#include <stdio.h>
#include <string.h>
#include "ft_recursive_factorial.c"

int		main()
{
	/* int k = 0; */
	/* int k = -5; */
	int k = 5;
	printf("input : %d\n", k);
	printf("output : %d\n", ft_recursive_factorial(k));

	return (0);
}
