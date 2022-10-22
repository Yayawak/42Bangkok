/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:05:54 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 14:06:13 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include "ft_split.c"

int	main(int argc, char **argv)
{
		int	index;
		char	**splited;

		// argc = argc + 0;
		argc = 3;
		argv[1] = "index, fname, lname, nickname, salary, bacholer";
		argv[2] = ", ";
		// printf("Count occ: %d\n", count_occur("  a b  bb  ", "c   "));
		printf("Count word of $%s$\n\t : %d\n", argv[1], count_occur(argv[1], argv[2]));
				splited = ft_split(argv[1], argv[2]);
		index = 0;
		printf("Tab start\n");
		while (splited[index])
		{
				printf("tab[%d]: $%s$\n", index, splited[index]);
				fflush(stdout);
				index++;
		}
		printf("Tab end\n");
		return (0);
}
*/
