int	ft_iterative_factorial(int nb)
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
