int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'z') || (str[i] > 'Z' && (str[i] < 'a')))
			return (0);

	}

	return (1);
}
