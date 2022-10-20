#include <stdio.h>

/* int	sqrt_rec(unsigned long long	k, unsigned long long n) */
//             1       64
int	sqrt_rec(int k, int n)
{
		/* unsigned long long next_k; */
		int	next_k;

		// 0. nk = (1 + (1 / 64)) / 2 --> nk = (1 + 1) / 2 = 1
		// 1. 
		/* next_k = (k + (n / k)) / 2; */
		next_k = (k + n/k) / 2;
		/* next_k = (k + n / k) / 2; */
		// 0. ((1*1) <= 64 && 4 > 64) --> (T && F) --> F
		if (((k * k) <= n) && ((k + 1) * (k + 1) > n))
		/* if (k*k <= n && (k+1)*(k+1) > n) */
				return (k);
		// 0. came here !!
		else
				// 0. sqrt_rec(1, 64) WTF CAN'T exit loop
				return sqrt_rec(next_k, n);
}

// n = 64
int	ft_sqrt(int n)
{
		return sqrt_rec(1, n);
}

