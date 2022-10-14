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
int	main(void)
{
	char	*src = "Hello world";
	char 	dest[100];

	printf("Before \nsrc :%d\n, dest %s \n\n", src, dest);
//	ft_strcpy(dest, src);
	printf("After \nsrc :%d\n, dest %s \n\n", src, dest);
	return (0);
}
