//#include <stdio.h>

int	f_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;	
		s++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i, d_len;

	i = 0;
	d_len = f_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		/* printf("i %d\t", ); */
		dest[d_len + i] = src[i];
		/* d_len++; */
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);

}
