int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
