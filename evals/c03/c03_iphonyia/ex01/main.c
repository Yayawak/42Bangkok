/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 14:42:43 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	atoi(char *str)
{
	int	i;

	i = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 4)
	{
		printf("<str> <str> <unsint> expected\n");
		return (1);
	}
	i = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	if (i == 0)
	{
		putstr("0");
	}
	else
	{
		printf("%d\n", i);
	}
	return (0);
}
