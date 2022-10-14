/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:04:44 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/14 15:24:37 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int x, int y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if (!(x + y == 197))
	{	
		ft_putchar(',');
		ft_putchar(' ');
	}
}	

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_print(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
