/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:12:58 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 16:17:50 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_str	*stocks;
	struct s_stock_str	*created;

	stocks = (t_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stocks)
		return (NULL);
	index = -1;
	while (++index < ac)
	{
		created = (t_stock_str *)malloc(sizeof(struct s_stock_str));
		if (!created)
			return (NULL);
		stocks[index] = *created;
		stocks[index].size = ft_strlen(av[index]);
		stocks[index].str = av[index];
		stocks[index].copy = ft_strdup(av[index]);
	}
	stocks[index] = (struct s_stock_str){0, 0, 0};
	return (stocks);
}
