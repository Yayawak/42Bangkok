#include <stdio.h>

int	ft_sqrt(int nb)
{
		int	i;

		i = 0;
		while (i < nb)
		{
				if ((i * i) == nb)
				{
						return (i);
				}
				i++;
		}
		return (0);
}

// 25 ? bug 
int	ft_is_prime(int nb)
{
		int	i;

		i = 5;
		if (nb < 0)
				return ft_is_prime(nb * (-1));
		if ((nb == 0) || (nb == 1))
				return (0);
		if (nb == 2 || nb == 3)
				return (1);
		if (((nb % 2) == 0) || ((nb % 3) == 0))
				return (0);
		// 3 < 25
		while (i <= ft_sqrt(nb))
		{
				if (((nb % i) == 0) || (nb % (i + 2)) == 0)
						return (0);
				i += 6;
		}
		return (1);
		/* return (-1); */
}

int	ft_find_next_prime(int nb)
{
		if (ft_is_prime(nb) == 1)
				return (nb);
		return (ft_find_next_prime(nb + 1));
}
