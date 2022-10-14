/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:59:22 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:33:01 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdbool.h>
#include<string.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

bool	is_char_printable(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	x;

	index = 0;
	while (true)
	{
		x = str[index];
		if (x == '\0')
			break ;
		if (is_char_printable(x))
			ft_putchar(x);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[x / 16]);
			ft_putchar("0123456789abcdef"[x % 16]);
		}
		index++;
	}
}
