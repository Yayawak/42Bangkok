#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_ultimate_range.c"

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
				int	max;
				int	*range;
				int size;

				min = 5;
				max = 20;
				size = ft_ultimate_range(&range, min, max);

				printf("Min = %d\nMax = %d\n\t -> (size = %d)",
												min, max, size);
				fflush(stdout);
				/* print_int_arr(range, size + 2); */
				print_int_arr(range, size);
				return (0);
}
