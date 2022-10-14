#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:37:39 by natharav          #+#    #+#             */
/*   Updated: 2022/10/14 15:46:34 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	while (size >= 0)
	{
		i = 0;
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int	arr[] = {99, 10, 2, 4 , 5, 6};

	ft_sort_int_tab(arr, 6);

	for (int i = 0; i < 6; i++)
		printf("%d,", arr[i]);
	return 0;
}
