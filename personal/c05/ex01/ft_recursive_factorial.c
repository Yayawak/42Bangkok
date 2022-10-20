int	ft_recursive_factorial(int nb)
{
		//if (nb == 1) bug when input negative number
		if (nb < 0)
				return (0);
		if (nb == 1)
				return (nb);
		/* return 0; */
		return (nb * ft_recursive_factorial(nb - 1));
}
