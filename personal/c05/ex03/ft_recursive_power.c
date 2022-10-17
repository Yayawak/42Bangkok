int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
	{
		return nb;
	}
	/* return 0; */
	return nb * ft_recursive_power(nb, --power);
}
