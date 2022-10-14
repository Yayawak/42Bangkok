unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int dstsize)
{
	unsigned	int	count, idx;

	count = 0;
	idx = 0;
	while (src[count] != '\0')
		count++;
/* the strlcpy() and strlcat() functions return the */
/* total length of the string they tried to create. */
/* For strlcpy() that means the length of src. */
	if (dstsize != 0)
	{
		while (src[idx] != '\0' && idx < (dstsize - 1))
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
	}
	return (count);
}
