/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:27:28 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

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
	char dest[10] = "Hi ";
	if (argc != 2)
	{
		putstr("Error,str expect");
		return (1);
	}
	putstr(ft_strcat(dest, arcv[1]));
	//printf("Library:%s\n", strcat(dest, arcv[1]));
	return (0);
}
*/
