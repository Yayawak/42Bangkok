#include <stdio.h>
#include <string.h>
#include "ft_iterative_power.c"

void	test(int nb, int p)
{
		/* int p = 5; */
		/* int nb = 2; */
		printf("input : %d %d\n", nb, p);
		printf("output : %d\n", ft_iterative_power(nb ,p));
		printf("------------------------\n");
}

int		main()
{
		int	i;

		i = -3;
		while (i < 5)
		{
				test(2, i);
				i++;
		}
		return (0);
}
