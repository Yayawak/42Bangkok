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
	int	inter_range;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	inter_range = max - min - 1;
	buffer = malloc(inter_range * sizeof(int));
	if (buffer == NULL)
	{
		*buffer = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= inter_range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (inter_range + 1);
}
