#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
				int	index;

				index = -8;
				while (index < 4)
				{
								printf("macros::abs(%d) = %d\n", index, ABS(index));
								index++;
				}
				return (0);
}
