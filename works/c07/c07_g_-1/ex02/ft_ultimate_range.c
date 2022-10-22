/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:18:13 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 14:06:41 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*buffer;
	
	if (range == 0)
			return (-1);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc((max - min) * sizeof(int));
	if (buffer == 0)
		return (-1);
	index = 0;
	while (min < max)
	{
		buffer[index++] = min++;
	}
	*range = buffer;
	return (max - min);
}
