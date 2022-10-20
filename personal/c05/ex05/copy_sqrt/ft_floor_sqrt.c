// find sqrt by Binary search (just floor)
int	ft_sqrt_rec(int low, int high, int N)
{
		if (low <= high)
		{
				int mid;

				mid = (low + high) / 2;
				// Base Case
				if ((mid * mid <= N) &&
					((mid + 1) * (mid + 1)) > N)
				{
						return (mid);
				}
				// check if the left search space is useless
				else if ((mid * mid) < N)
						return (ft_sqrt_rec((mid + 1), high, N));
				else
						return (ft_sqrt_rec(low, (mid - 1), N));
		}
		return (low);
}

int	ft_sqrt(int N)
{
		return (ft_sqrt_rec(0, N, N));
}
