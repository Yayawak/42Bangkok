/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 19:37:50 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

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
	if (argc != 4)
	{
		printf("<str> <str> <unsint> expected\n");
		return (1);
	}
	printf("Library:%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("my_FT:%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
