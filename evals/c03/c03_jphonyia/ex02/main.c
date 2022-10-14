/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:50:48 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 19:41:26 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int	main(void)
{

	char	*dest = "Hi, ";
	char	*sss = "Vim VS Vscode Vs Emac";
	//putstr(ft_strcat(dest, sss));
	printf("Library:%s\n", strcat(dest, sss));
	return (0);
}
