/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:45:31 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/10 14:36:45 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putcomb22(int n1, int n2)
{
	char	c1;
	char	c2;

	c1 = (n1 - (n1 % 10)) / 10 + '0';
	c2 = n1 % 10 + '0';
	putchar(c1);
	putchar(c2);
	putchar(' ');
	c1 = (n2 - (n2 % 10)) / 10 + '0';
	c2 = n2 % 10 + '0';
	putchar(c1);
	putchar(c2);
	if (!(n1 == 98 && n2 == 99))
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (1)
	{
		while (++n2 <= 99)
			ft_putcomb22(n1, n2);
		n1++;
		n2 = n1;
		if (n1 == 99)
			return ;
	}
}

int	main(void)
{
	ft_print_comb2();
}
