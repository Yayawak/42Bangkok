/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:59 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 13:17:31 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	/* int	*to_return; */
	int	*arr;
	if (min >= max)
		return (0);
    arr = malloc(sizeof(int) * (max - min));
	/* to_return = arr; */
	while (min < max)
    {
		/* *arr++ = min++; */
		*(arr)++ = min++;
		/* *to_return++ = min++; */
        /* printf("%d, ", *to_return); */
    }
		/* *arr++ = min++; */
	/* return (to_return); */
	return (arr - (sizeof(arr) - sizeof(arr[0])));
}

int main(void)
{
    ft_range(0, 8);
}
