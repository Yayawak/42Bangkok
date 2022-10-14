/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:05:24 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/14 15:25:39 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnumber(int temp, int size)
{
	while (size)
	{
		ft_putchar((temp / size) + 48);
		temp %= size;
		size /= 10;
	}
}

void	ft_putnbr(int nb)
{	
	int	temp;
	int	size;

	size = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	temp = temp / 10;
	while (temp > 0)
	{
		temp /= 10;
		size *= 10;
	}
	temp = nb;
	ft_printnumber(temp, size);
}

int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-42);
	return (0);
}
