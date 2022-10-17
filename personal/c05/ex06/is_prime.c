#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 0)
	{
		return (0);
	}
	if (nb < 0)
	{
		return ft_is_prime(nb * (-1));
	}
	else if (nb == 1)
		return (0);
	else if (nb == 2)
		return (0);
	else if ((nb % 2) == 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			printf("only odd : %d\n", i);
			if ((nb % i) == 0)
			{
				printf("%d is PRIME ! \n", i);
				return (1);
			}
			i += 2;
		}
	}
	return (0);
	/* if (ft_is_prime(nb - 1)) */
}
