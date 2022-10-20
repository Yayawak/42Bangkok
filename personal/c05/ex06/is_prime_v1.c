#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0)
		return ft_is_prime(nb * (-1));
	else if (nb == 0)
		return (0);
	else if (nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if ((nb % 2) == 0)
		return (0);
	else
	{
		i = 3;
		// if : nb = 9
		// i = 3, 5, 7, 9
		while (i <= nb)
		/* while (i < nb) */
		{
			/* printf("only odd : %d\n", i); */
			if (nb % i)
			{
				printf("\n%d is PRIME ! \n", i);
				/* printf("\n%d is Not PRIME ! \n", i); */
				return (1);
			}
			i += 2;
		}
	}
	return (0);
	/* return (1); */
	/* if (ft_is_prime(nb - 1)) */
}
