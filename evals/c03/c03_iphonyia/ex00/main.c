/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 14:39:13 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

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

	if (argc != 3)
	{
		write(2, "Two string expected", 17);
		return (1);
	}
	i = ft_strcmp(argv[1], argv[2]);
	if (i == 0)
	{
		putstr("0");
	}
	else
	{
		printf("%d\n", i);
	}
	return (i);
}
