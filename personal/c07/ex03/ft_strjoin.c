#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char *str)
{
				int	index;

				index = 0;
				while (str[index])
								index++;
				return (index);
}

char *ft_strcpy(char *dest, char *src)
{
				int	index;

				index = 0;
				while (src[index] != '\0')
				{
								dest[index] = src[index];
								index++;
				}
				dest[index] = '\0';
				return (dest);
}

// len(all strings + all seperators)
int	ft_compute_final_length(char **strings, int size, int sep_length)
{
				int	final_length;
				int index;

				final_length = 0;
				index = 0;
				while (index < size)
				{
								final_length += ft_str_length(strings[index]);
								final_length += sep_length;
								index++;
				}
				final_length -= sep_length;
				return (final_length);
}

// sepator is ,
char	*ft_strjoin(int size, char **strs, char *sep)
{
				int	index;
				int	full_length;
				char	*read_head;
				char	*string;

				if (size == 0)
								return ((char *)malloc(sizeof(char)));
				full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
				if (!(string = (char *)malloc((full_length + 1) * sizeof(char))))
								return (0);
				// make 'read_head' point to address of 'string variable'
				read_head = string;
				index = 0;
				while (index < size)
				{
								ft_strcpy(read_head, strs[index]);
								read_head += ft_str_length(strs[index]); // add position of addrss equals to length of this string
								// if not last string
								if (index < (size - 1))
								{
												// append sepearator to the last of read_head
												ft_strcpy(read_head, sep);
												read_head += ft_str_length(sep);
								}
								index++;
				}
				*read_head = '\0';
				return (string);
}
