/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:40:52 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/11 11:11:40 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(char *str, int n)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < n)
	{
		t += str[i];
		i++;
	}
	return (t);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (sum(s1, n) > sum(s2, n))
	{
		return (1);
	}
	if (sum(s1, n) < sum(s2, n))
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
