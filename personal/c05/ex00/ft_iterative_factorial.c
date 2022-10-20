// nb = 4;
int	ft_iterative_factorial(int nb)
{
		int	n;

		// 0. 4 == 1 ?
		/* if (nb == 0) */
		if (nb < 1)
				return (!nb);
				/* return (1); */
		n = 1;
		// 0. if (nb is not 0)
		while (nb)
				// 			n = 1
				// 0. 1 *= 4--;
				// 0. n <-- 4 ==> then nb--; --> nb = 3;
				// 			n = 4
				// 1. n *= 3 --> 4 * 3 = 12 then nb-- --> nb = 2;
				// 			n = 12
				// 2. n *= 2 -->12 * 2 = 24 then nb-- --> nb = 1;
				// 			n = 24
				// 3. n *= 1 -->24 * 1 = 24 then nb-- --> nb = 0;
				n *= nb--;
		return (n);
}

int	_ft_iterative_factorial(int nb)
{
	int	i;
	int result;

	i = 1;
	result = 1;
	while (i <= nb)
	{
		/* nb *= (nb ) */
		result *= i;
		i++;
	}
		/* return (0); */
	return (result);
}
