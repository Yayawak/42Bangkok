/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:04:09 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/14 15:24:03 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 2);
}

void	ft_print_comb(void)
{
	int	x[3];

	x[0] = '0';
	while (x[0] <= '7')
	{
		x[1] = x[0] + 1;
		while (x[1] <= '8')
		{
			x[2] = x[1] + 1;
			while (x[2] <= '9')
			{
				ft_putchar(x[0]);
				ft_putchar(x[1]);
				ft_putchar(x[2]);
				if (x[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				x[2]++;
			}
			x[1]++;
		}
		x[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
