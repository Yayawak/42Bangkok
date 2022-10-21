#include <stdio.h>
#include <stdlib.h>

// ft_range(-2, 3) -> -2, -1, 0, 1, 2
// 2 - (-2) + 1 = 5
int		*ft_range(int start, int end)
{
				int	size;
				int	*arr;
				int i;

				size = end - start + 1;
				/* arr = (int *)malloc(size * sizeof(int)); */
				arr = (int *)malloc((size + 1) * sizeof(int));
				i = 0;
				while (i < size)
				{
								// 0. arr[0] = -2 + 0;
								arr[i] = start + i;
								i++;
				}
				return (arr);
}

int		main(void)
{
				printf("tab start\n");
				int	*xrr;
				int	i;
				int	mn;
				int	mx;
				int	size;

				mn = -2;
				mx = 3;
				size = mx - mn + 1;
				xrr = ft_range(mn, mx);
				i = 0;
				while (i < size)
				{
								printf("xrr[%d] = %d\n", i, xrr[i]);
								i++;
				}
				printf("tab end\n");
				return (0);
}
