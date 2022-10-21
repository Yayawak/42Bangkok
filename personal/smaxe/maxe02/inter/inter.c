#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
				int	idx;

				idx = 0;
				while (str[idx])
								idx++;
				return (idx);
}

bool	has_already(char c, bool already[256])
{
				return (already[(unsigned char)c]);
}

void	set_already(char c, bool already[256])
{
				already[(unsigned char)c] = true;
}

void	inter(char *s1, char *s2)
{
				int	i;
				int	j;
				int	len1;	
				int len2;
				bool	already[255];

				len1 = ft_strlen(s1);
				len2 = ft_strlen(s2);
				i = 0;
				while (i < 255)
				{
								already[i] = false;
								i++;
				}
				i = 0;
				j = 0;
				while (i < len1)
				{
								j = 0;
								while (j < len2)
								{
												if (s1[i] == s2[j])
												{
																if (!has_already(s1[i], already))
																				write(1, &s1[i], 1);
																set_already(s1[i], already);
												}
												j++;
								}
								i++;
				}
}


int	main()
{
				char	*s1;
				char	*s2;

				s1 = "ultimate";
				s2 = "my mate nate";

				printf("s1 : %s\n", s1);
				printf("s2 : %s\n", s2);
				/* printf("interesection : %s\n", inter(s1, s2)); */
				printf("intersectoin \n");
				inter(s1, s2);
				write(1, "\n", 1);
}
