/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:04:17 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 17:05:01 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	to_find;

	if (nb <= 0 || nb > 2147395600)
	{
		return (0);
	}
	to_find = 1;
	while (to_find <= 46340)
	{
		if (to_find * to_find > nb)
			break ;
		if (to_find * to_find == nb)
			return (to_find);
		to_find ++;
	}
	return (0);
}
