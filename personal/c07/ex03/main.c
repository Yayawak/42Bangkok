#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strjoin.c"

int	main(void)
{
				int	index;
				char	**strs;
				char	*seperator;
				char	*result;
				int	strs_size;

				strs_size = 5;
				strs = (char**)malloc(strs_size * sizeof(strs));
				strs[0] = "Nion cat";
				strs[1] = "pixel work";
				strs[2] = "Jetpack j";
				strs[3] = "Terraria";
				seperator = ",";
				index = 0;
				while (index < strs_size)
				{
								result = ft_strjoin(index, strs, seperator);
								printf("Result wiht size = %d : $%s$\n", index, result);
								free(result);
								index++;
				}

				return (0);
}
