/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 19:35:53 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int		ft_strcmp(char *s1, char *s2);

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	if (argc != 3)
	{
		write(2, "Two string expected", 17);
		return (1);
	}
	i = strcmp(argv[1], argv[2]);
	a = ft_strcmp(argv[1], argv[2]);
	printf("library:%d\n", i);
	printf("my FT:%d\n", a);
	return (0);
}
