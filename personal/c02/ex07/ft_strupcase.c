char	*my_ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		/* *str = *str - 26 - 6; */
		if ((*str >= 'a') && (*str <= 'z'))
			*str -= 26 + 6;
			/* *str -= 'a' - 'A'; */
		str++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
