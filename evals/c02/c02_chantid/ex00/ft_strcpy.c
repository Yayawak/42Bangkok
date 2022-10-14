#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:47:07 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/14 16:01:46 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src = "Hello world";
	char 	dest[100];


	printf("Before src :%d\n, dest %s \n\n", src, dest);
	ft_strcpy(dest, src);
	printf("After src :%d\n, dest %s \n\n", src, dest);
	return (0);
}
