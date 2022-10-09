/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:56:54 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/09 23:22:40 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num_start_char;

	num_start_char = '0';
	while (num_start_char <= '9')
	{
		write(1, &num_start_char, 1);
	num_start_char++;
	}
}

