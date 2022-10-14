/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:58:46 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/10 14:39:20 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *t, int n)
{
	int	j;

	j = 0;
	if (*t != 58 - n)
		j = 2;
	write(1, t, n + j);
}

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*t = '0';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		print(t, n);
		i = n;
		while (i--)
			if (++t[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			t[i] = t[i - 1] + 1;
	}
}

int	main(void)
{
	ft_print_combn(8);
	return (0);
}
