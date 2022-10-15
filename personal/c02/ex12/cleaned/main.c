/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:05:15 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/15 18:07:33 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_print_memory.c"

int	main(void)
{
	int	i;
	char	str[] = "iBonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	char	str_2[] = "Turn in your assignment in your Git repository as usual. Only the work inside your repos- itory will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.";

	i = 250;

	ft_print_memory(str, i);
	printf("\n\n");
	ft_print_memory(str_2, i);
	return (0);
}

