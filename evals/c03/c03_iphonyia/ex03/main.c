/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:48:09 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:47:02 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<stdio.h>
#include<string.h>
void	ft_putnbr(int a);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

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
	char dest[5] = "Hi ";

	if (argc != 3)
	{
		putstr("Error,<str> <unsign int> expect");
		return (1);
	}

	putstr(ft_strncat(dest, arcv[1], atoi(arcv[2])));
//	printf("library:%s\n", strncat(dest, arcv[1], atoi(arcv[2])));
	return (0);
}
*/
