/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:58:37 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/20 18:25:11 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((s1[i] && s2[i]) != '\0') && (i <= n))
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
	char *s2 = "asdfgh456";
	char *s3 = "kjhg8765";
	int a, b, c;
	a = ft_strncmp(s1, s2, 4);
	b = ft_strncmp(s1, s2, 8);
	c = ft_strncmp(s1, s3, 5);

	printf("%d\n%d\n%d", a, b, c);
}
