/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:06:49 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 14:06:53 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_ultimate_range.c"


void	print_int_arr(int numbers[], int size)
{
		int index;

		printf("[ ");
		index = 0;
		while (index < size)
		{
				printf("%d", numbers[index]);
				if (index != size - 1)
				{
						printf(", ");
				}
				index++;
		}
		printf(" ]");
}
int	main(void)
{
		int	min;
		int	max;
		int	*range;
		int size;

		min = 5;
		max = 20;
		size = ft_ultimate_range(&range, min, max);

		printf("Min = %d\nMax = %d\n\t -> (size = %d)",
						min, max, size);
		// fflush(stdout);
		// print_int_arr(range, size + 2);
		print_int_arr(range, size);
		print_int_arr(range, 20);
		// return (0);

		int	*list;
		ft_ultimate_range(&list, 5 ,10);
		for (int i = 0; i < 5; i++)
				printf("%d, ", list[i]);
		printf("\n");
		free(list);
		return (0);
}
*/
