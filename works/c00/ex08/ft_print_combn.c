/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:10:38 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/09 23:19:52 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	out(char *t, int n)
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

	*t = '0';
	i = 0;
	if (n < 1 || n > 9)
		return ;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		out(t, n);
		i = n;
		while (i--)
			if (++t[i] <= 58 - n + i)
				break ;
		while (++i > 0 && i < n)
			t[i] = t[i - 1] + 1;
	}
	return ;
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
