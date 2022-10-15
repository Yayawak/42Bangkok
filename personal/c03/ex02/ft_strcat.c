//#include <stdio.h>

int	f_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;	
		// bug here lol
		s++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i, d_start;

	i = 0;
	d_start = f_strlen(dest);
//	printf("strlen(dest) = %d\n", d_start);
	/* while (i < n) */
	while (src[i] != '\0')
	/* while (*src != '\0') */
	{
		/* printf("i %d\t", ); */
		/* dest[d_start] = *src; */
		dest[d_start] = src[i];
		d_start++;
		/* src++; */
		i++;
	}
	dest[d_start] = '\0';
	return (dest);

}
