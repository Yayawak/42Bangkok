/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:34:20 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 14:34:50 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int	main(void)
{
	// char	*a = "Levi Ackerman.";
//                   0123456789
	char	a[40] = "Levi Ackerman.";
//                   012345
	char	*b = 	"Buyer.";
	// char	*b = "Acker";
	// char	*b = "";
	// char	*a = "Foo Bar Baz.";
	// char	*b = "Bar";
	unsigned int	l;

	l = ft_strlcat(a, b, 3);
	// p = strstr(a, b);

	printf("a string = %s\n", a);
	printf("b string = %s\n", b);

	printf("Dest After concated with n = %d bytes\n", l);
	printf("c string = %s\n", a);

	char str[300];
	int len;

	// 10 : 123
	strcpy(str,"123");
	len = strlcat(str,"ABCdefgh",2);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"123");
	len = ft_strlcat(str,"ABCdefgh",2);
    	printf("User   result : %d %s\n",len,str);

	// 10 : "1234AB"
	strcpy(str,"1234");
	len = strlcat(str,"ABCdef",7);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"ABCdef",7);
    	printf("User   result : %d %s\n",len,str);

	// 10 : "1234ABCde"
	strcpy(str,"1234");
	len = strlcat(str,"ABCdef",10);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"ABCdef",10);
    	printf("User   result : %d %s\n",len,str);

	// 6 : ""
	strcpy(str,"");
	len = strlcat(str,"ABCdef",0);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"");
	len = ft_strlcat(str,"ABCdef",0);
    	printf("User   result : %d %s\n",len,str);

	// 6 : ABCde
	strcpy(str,"");
	len = strlcat(str,"ABCdef",6);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"");
	len = ft_strlcat(str,"ABCdef",6);
    	printf("User   result : %d %s\n",len,str);

	// 4 : 1234
	strcpy(str,"1234");
	len = strlcat(str,"",5);
    	printf("Real   result : %d %s\n",len,str);
	strcpy(str,"1234");
	len = ft_strlcat(str,"",5);
    	printf("User   result : %d %s\n",len,str);

	return (0);
}
*/
