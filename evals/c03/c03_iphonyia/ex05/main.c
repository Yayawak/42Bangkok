/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:45:28 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 16:07:22 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<unistd.h>
#include<string.h>
#include<stdio.h>

void	ft_putnbr(int a);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

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
	char dest[10] = "12345";
	char src[] = "6789abcd";
	printf("dest:%s\n", dest);
	printf("src:%s\n", src);
	printf("myFT:%d\n", ft_strlcat(dest, src, 10));
//	printf("myFT:%lu\n", strlcat(dest, src, 10));
	printf("After dest:%s\n", dest);
	return (0);
}
*/
