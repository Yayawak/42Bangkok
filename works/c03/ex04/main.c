/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:26:59 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 14:27:44 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int	main(void)
{
	char	*a = "Levi Ackerman.";
	// char	*b = "Acker twitter";
	 char	*b = "Acker";
	// char	*a = "Foo Bar Baz.";
	// char	*b = "Bar";
	char	*p;

	p = ft_strstr(a, b);
	// p = strstr(a, b);

	printf("a string = %s\n", a);
	printf("b string = %s\n", b);

	printf("Final value\n");
	printf("c string = %s\n", p);
	char str[300];

	strcpy(str,"");
    	printf("Real   result : %s\n",strstr(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strstr(str,""));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strstr(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strstr(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strstr(str," "));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strstr(str," "));

	strcpy(str,"Test empty.");
    	printf("Real   result : %s\n",strstr(str,"empty. "));
	strcpy(str,"Test empty.");
    	printf("User   result : %s\n",ft_strstr(str,"empty. "));

	strcpy(str,"ABCd");
    	printf("Real   result : %s\n",strstr(str,"C"));
	strcpy(str,"ABCd");
    	printf("User   result : %s\n",ft_strstr(str,"C"));

	return (0);
}
*/
