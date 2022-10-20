int	ft_sqrt(int nb)
{
		int	i;

		if (nb < 1)
				return (0);
		i = 1;
		while ((i * i) < nb)
				i++;
		return ((i * i == nb) ? i : 0);
}

// n = -36
int	ft_is_prime(int n)
{
		int	i;
		if (n < 0)
				return (ft_is_prime((-1) * n));
		if (n <= 1)
				return (0);
		if (n == 2 || n == 3)
				return (1);
		if ((n % 2) == 0 || (n % 3) == 0)
				return (0);
		i = 5;
		while ((i * i) < ft_sqrt(n))
		/* while ((i * i) <= n) */
		{
				/* if ((n % i) == 0 || (n % (i + 2)) == 0) */
				if ((n % i) == 0 || (n % (i + 2)) == 0)
						return (0);
				i += 6;
		}
		return (1);
}

int	ft_find_next_prime(int nb)
{
		if (ft_is_prime(nb) == 1)
				return (nb);
		return (ft_find_next_prime(nb + 1));
}
