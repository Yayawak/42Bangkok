/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:04:06 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/09 23:23:38 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	out_xx(char first, char second, char last)
{
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(last);
				if (first != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				last++;
			}
			second++;
		}
		first++;
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	out_xx(first, second, last);
}
