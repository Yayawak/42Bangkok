/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:20:05 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:57:04 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

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

int	main(int argc, char *arcv[])
{
	if (argc != 3)
	{
		putstr("Error,<str> <str> expect");
		return (1);
	}
	printf("my_ft:%s\n", ft_strstr(arcv[1], arcv[2]));
	//printf("library:%s\n", strstr(arcv[1], arcv[2]));
	return (0);
}
*/
