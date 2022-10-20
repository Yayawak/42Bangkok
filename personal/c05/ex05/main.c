#include <stdio.h>
#include <string.h>
#include "ft_sqrt.c"

int		main()
{
	int	i;
	/* unsigned long long i; */

	i = -5;
	while (i < 20)
	{
		printf("i = %d \t", i);
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
		printf("----------------------\n");
		i++;
	}

	return (0);
}
