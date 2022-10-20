/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:15:17 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/20 18:24:20 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0')
	{
		if (!(s1[i] == s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		if ((s1[i] == '\0' && s2[i] != '\0'))
		{
			return (s1[i] - s2[i]);
		}
		if ((s1[i] != '\0' && s2[i] == '\0'))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	char *s1 = "asdfgh123456";
	char *s2 = "asdfgh123456";
	char *s3 = "kjhg8765";
	int a, b;
	a = ft_strcmp(s1, s2);
	b = ft_strcmp(s1, s3);

	write(1, &a, 1);
	printf("\n");
	write(1, &b, 1);
}
