// nb = 36
int	ft_is_prime(int nb)
{
		unsigned int	i;

		/* if (((nb > -1) && (nb < 3)) || !(nb % 2)) */
		if (((nb < 3)) || !(nb % 2))
				// (nb == ..., -1, 0, 1, 3 ) || (odd)
				// nb == 2 --> 1
				return (nb == 2);
		i = 3;
		// 9 <= 36
		while ((i * i) <= (unsigned int)nb)
		{
				// !(36 % 9) -> !(0 == 0) -> !(0) -> 1
				if (!(nb % i))
						return (0);
				i += 2;
		}
		return (1);
}
