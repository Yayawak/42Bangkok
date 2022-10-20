int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 1)
			// if power == 0 -> return (!0) -> return (1);
			// if power == -2 -> return (!-2) -> return (0);
			// if power == -2 -> return (!-2) -> return (0);
			return (!power);
			/* return (1); */
	i = 0;
	result = nb;
	while (i < (power - 1))
	{
		result *= nb;	
		i++;
	}
	return (result);
}
