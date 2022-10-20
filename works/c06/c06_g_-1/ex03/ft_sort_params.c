/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:25:19 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 17:27:18 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *p_str)
{
	while (*p_str != '\0')
	{
		write(1, p_str, 1);
		p_str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_strswap(char **a, char **b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_str_tab(char **tab, int size)
{
	char	*pivot;
	int		i;
	int		j;

	if (size < 2)
		return ;
	pivot = tab[--size];
	i = 0;
	j = 0;
	while (j < size)
	{
		if (ft_strcmp(tab[j], pivot) < 0)
		{
			ft_strswap(&tab[i], &tab[j]);
			i++;
		}
		j++;
	}
	if (ft_strcmp(tab[i], tab[size]) > 0)
		ft_strswap(&tab[i], &tab[size]);
	ft_sort_str_tab(tab, i);
	ft_sort_str_tab(tab + i + 1, size - i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_str_tab(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
