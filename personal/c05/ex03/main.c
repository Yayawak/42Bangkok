#include <stdio.h>
#include <string.h>
#include "ft_recursive_power.c"

int		main()
{
	int p = 5;
	int nb = 2;
	printf("input : %d %d\n", nb, p);
	printf("output : %d\n", ft_recursive_power(nb ,p));

	return (0);
}
