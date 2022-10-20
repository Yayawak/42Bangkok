#include <stdio.h>
#include <string.h>
#include "ft_recursive_power.c"

void	test(int nb, int p)
{
		printf("input : %d %d\n", nb, p);
		printf("output : %d\n", ft_recursive_power(nb ,p));
		printf("---------------------\n");
}

int		main()
{
		/* int p = 5; */
		int nb = 2;
		int p;

		p = -5;
		/* while (p++ < 6) */
		/* while (--p < 6) */
		while (p < 6)
		{
				test(nb, p);
				p++;
		}

		return (0);
}
