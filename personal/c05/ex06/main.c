#include <stdio.h>
#include <string.h>
#include "ft_is_prime.c"

int		main()
{
	int	i;

	i = -20;
	/* i = 0; */
	while (i < 20)
	{
		printf("number to check = %d \t", i);
		printf("%d is prime ? \t %d\n", i, ft_is_prime(i));
		printf("-------------------------------------------------------\n");
		i++;
	}

	return (0);
}
