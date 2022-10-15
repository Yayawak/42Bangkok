int	ft_strlen(char *str)
{
		int	len;

		len = 0;
		while (*str != '\0')
		{
				str++;
				len++;
		}
		return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
		int	d_len;
		unsigned int	s_start;

		d_len = ft_strlen(dest);
		// append new n chars to dest by src,
		// start append at dest[d_len] {appened by str[s_start]}
		s_start = 0;
		while ((src[s_start] != '\0') && (s_start < size))
		{
				dest[d_len + s_start] = src[s_start];
				s_start++;
		}
		dest[d_len + s_start] = '\0';

		/* int	total_len; */
		/* total_len = d_len + s_start; */
		/* while (dest[total_len] != '\0') */
		/* { */
		/* 		dest[total_len + s_start] = '\0'; */
		/* } */
		/* return (0); */
		return (d_len + s_start);
}
