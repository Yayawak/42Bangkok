/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:58:44 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 18:34:32 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) && *(s2 + i)) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char s1[] = "suphawit";
	char s2[] = "suphawit";
	char s3[] = "suphawiT";
	char s4[] = "Suphawit";
	char s5[] = "buphawit";
	char s6[] = "auphawit";

	printf("%s : %s\n",s1, s2);
	printf("result : %d\n",ft_strcmp(s1, s2));
	printf("%s : %s\n",s3, s4);
	printf("result : %d\n",ft_strcmp(s3, s4));
	printf("%s : %s\n",s5, s6);
	printf("result : %d\n",ft_strcmp(s5, s6));
}
