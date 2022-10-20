#include <stdlib.h>

int	ft_strlen(char *p_str)
{
				int	len;

				len = 0;
				while (p_str[len])
				{
								len++;
				}
				return (len);
}

char	*ft_strdup(char *src)
{
				/* int	str_len; */
				int		index;
				char	*p_dest;

				/* str_len = ft_strlen(src); */
				/* p_dest = malloc(sizeof(char*) * str_len); */
				index = 0;
				if ((p_dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
								return (0);
				while (src[index])
				{
								p_dest[index] = src[index];
								index++;
				}
				/* p_dest = src; */
				p_dest[index] = '\0';
				return (p_dest);
}
