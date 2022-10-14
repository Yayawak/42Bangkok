/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:03:07 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/11 10:46:37 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i += *str;
		str++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	if (sum(s1) > sum(s2))
	{
		return (1);
	}
	if (sum(s1) < sum(s2))
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
