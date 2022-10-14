#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:23:42 by natharav          #+#    #+#             */
/*   Updated: 2022/10/14 15:47:10 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i <= (size / 2))
	{
		a = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = a;
		i++;
	}
}


int	main(void)
{
	int	arr[] = {1, 2, 3, 4 , 5, 6};

	ft_rev_int_tab(arr, 6);

	for (int i = 0; i < 6; i++)
		printf("%d,", arr[i]);
	return 0;
}
