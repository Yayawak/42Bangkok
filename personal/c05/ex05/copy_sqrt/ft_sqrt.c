//               36, 1, 36
int	sqrt_wrapper(n, min, max)
{
		int	guess;
		int	guess_squared;

		// 36 < 1 ?
		if (max < min)
				return (-1);
		// 0. g = 37 / 2 = 18
		// 1. g = (1+17) / 2 --> g = 6
		// BISECTION
		guess = (min + max) / 2;
		// 0. gs = 18 * 18 = 324
		// 1. gs = 6 * 6 = 36
		guess_squared = guess * guess;
		// 0. 324 == 36 ?
		// 1. 36 == 36 ? --> yes
		if (guess_squared == n)
				// 1. return 6;
				return (guess);
		// 0. 324 < 36 ?
		else if (guess_squared < n)
				sqrt_wrapper(n, (guess + 1), max);
		// 0. 324 >= 36 ?
		else
				// sq_wp(36, 1, 17)
				sqrt_wrapper(n, min, (guess - 1));
		/* return (-99); */
		/* return (guess); */
}

// nb = 36;
int	ft_sqrt(int nb)
{
		// sqrt_wp(36, 1, 36)
		return (sqrt_wrapper(nb, 1, nb));
}

int	ft_sqrt_v0(int nb)
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
