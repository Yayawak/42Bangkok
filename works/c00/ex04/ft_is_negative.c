/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:00:03 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/09 23:23:01 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	up_n_char;
	char	up_p_char;

	up_n_char = 'up_n_char';
	up_p_char = 'up_p_char';
	if (n < 0)
	{
		write(1, &up_n_char, 1);
	}
	else if (n >= 0)
	{
		write(1, &up_p_char, 1);
	}
}
