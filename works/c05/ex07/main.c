/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:09:00 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 17:09:49 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include "ft_find_next_prime.c"

void	visualize_next_prime(int guess_prime, int start, int end)
{
		int	next_prime;

		next_prime = ft_find_next_prime(guess_prime);
		printf("\n");
		while (start < end)
		{
				if (start == 0)
						printf("%d.", start);
				else if (start == guess_prime)
				{
						printf("\033[0;32m");
						printf("%dx", guess_prime);
				}
				else if (start == next_prime)
				{
						printf("\033[0;31m");
						printf("%d!", next_prime);
				}
				else if (start == end - 1)
				{
						printf("%d.", end);
				}
				else 
				{
						printf("\033[0;37m");
						printf("_.");
				}
				start++;
		}
		printf("\n\n\n");

}

int		main(int argc, char **argv)
{
		int	start;

		start = 0;
		int end = 30;
		while (start < end)
		{
				visualize_next_prime(start, 0, end);
				start++;
		}
		return (0);
}
*/
