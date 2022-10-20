#include <stdlib.h>

// range is pointer which points as address of range_arr_int
int		ft_ultimate_range(int **range, int min, int max)
{
		int	inter_range;
		int index;
		int	*buffer;

		if (min >= max)
		{
				*range = 0; // first element
				return (0);
		}
		inter_range = max - min - 1;
		if ((buffer = malloc(inter_range * sizeof(int))) == NULL)
		{
				*buffer = 0; // first element
				return (-1);
		}
		*range = buffer; // set pointer at the same address
		index = 0;
		while (index <= inter_range)
		{
				buffer[index] = min + index;
				index++;
		}
		return (inter_range + 1);
}

