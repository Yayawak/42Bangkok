int	ft_abs(int num)
{
		if (num < 0)
				return (-1 * num);
		else
				return (num);
}

int	ft_sqrt(int n, int a)
{
		int	b;
		int	x;
		int	t;
		double EPS;

		b = n - (a * a);
		x = 0; // ?
		t = x;
		EPS = 0.0000000000000000001;
		// while error is still big
		while ((double)ft_abs((x * x) - n) > EPS)
		{
				x = a + b / (a + t);
				// converge to answer
				t = x;
		}
		return (x);

}
