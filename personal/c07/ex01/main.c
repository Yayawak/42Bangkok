#include <stdio.h>
#include <stdlib.h>
#include "ft_range.c"
#include <string.h>

void	print_int_arr(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int	main(void)
{
		int	min;
		int max;
		int range;

		min = -5;
		max = 24;
		range = max - min;
		print_int_arr(ft_range(min, max), range);
		return (0);
}
