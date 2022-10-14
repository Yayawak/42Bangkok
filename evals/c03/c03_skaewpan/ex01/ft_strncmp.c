/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:09:02 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 18:55:08 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	x;

	x = n;
	i = 0;
	if (n < 0)
	{
		while (i < x)
		{
			if (*(s1 + i) == *(s2 + i))
				i++;
			else
				return (s1[i] - s2[i]);
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char s1[] = "suphbwit";
	char s2[] = "suphAwit";
	int n = 6;

	printf("test strncmp : %d\n",strncmp(s1, s2, n));
	printf("test strncmp : %d\n",ft_strncmp(s1, s2, n)); 
}
