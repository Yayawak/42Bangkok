int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = nb;
	while (i < (power - 1))
	{
		result *= nb;	
		i++;
	}
	return (result);
}
