#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	while (*str != '\0')
	{
		str++;
		/* printf("Address of pointer %c = %p\n", *str, str); */
		len++;
	}
	return (len);
}
char	*ft_strcpy(char *dest, char *src)
{
	/* for (int i = 0; i < ft_strlen(dest); i++) */
	/* { */
	/* 	/1* dest[i] = src[i]; *1/ */
	/* 	*dest = *src; */
	/* 	src++; */
	/* 	dest++; */
	int	idx;

	idx = -1;
	while (src[idx++] != 0)
	{
		dest[idx] = src[idx];
	}
	/* dest[idx] = '\0'; */

	/* } */
	/* for (; *src != '\0'; dest++, src++) */
	/* { */
	/* 	*dest = *src; */
	/* } */
	return (dest);
}
