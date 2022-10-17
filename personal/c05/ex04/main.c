#include <stdio.h>
#include <string.h>
#include "ft_fibonacci.c"

int		main()
{
	int	i;

	i = -5;
	while (i < 10)
	{
		int	idx = i;
		printf("index : %d \n", idx);
		printf("value of index %d : %d\n", idx, ft_fibonacci(idx));
		printf("\n----------------------\n");
		i++;
	}

	return (0);
}
