/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:14:43 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:03:21 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<string.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	swap;

	swap = 0;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char src[] = "Hello";
	char dest[6];

	printf("Before : %p\n",src);
	printf("Before : %s\n",src);
	//for(int i = 0; i < 5; i++)
	//{
		//printf(" %s\n", src);
	//}
	strcpy(dest, src);
	printf("\n");
	printf("After : %p\n",dest);
	printf("After : %s\n",dest);
	//for(int i = 0; i < 5; i++)
	//{
		//printf(" %s\n", dest);
	//}
	return (0);
}
*/
