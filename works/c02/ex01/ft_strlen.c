int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	for (; *str != '\0'; str++ )
	{
		len++;
	}
	return len;
}

