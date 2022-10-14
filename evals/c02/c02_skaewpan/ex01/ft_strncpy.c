/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:40:42 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:04:25 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<string.h>
#include<stdio.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char src[] = "Suphawit";
	char dest[8];

	printf("Before : %p\n", src);
	printf("Before : %s\n", src);
	strncpy(dest, src, 5);
	printf("Before : %p\n", dest);
	printf("Before : %s\n", dest);
}
*/
