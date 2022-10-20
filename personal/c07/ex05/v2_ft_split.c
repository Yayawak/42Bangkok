#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool	ft_is_seperator(char *str, char *charset)
{
				while (*charset)
								if (*str == *charset++)
												return (true);
				return (false);
}

int	ft_wordlen(char *str, char *charset)
{
				int	index;

				index = 0;
				/* while (str[index] && !ft_is_seperator(str + index, charset)) */
				while (str[index] && !ft_is_seperator(&str[index] , charset))
								index++;
				return (index);
}

int	ft_wordcount_by_sep(char *str, char *charset)
{
				int	index;
				int	words;

				words = 0;
				while (*str)
				{
								while (*str && ft_is_seperator(str, charset))
												str++;
								index = ft_wordlen(str, charset);
								// shift pointer by index
								str += index;
								// if index != 0
								if (index)
												words++;
				}
				return (words);
}

char	*ft_wordcpy(char *src, int n)
{
				char	*dest;

				if (!(dest = malloc((n + 1) * sizeof(char))))
								return (NULL);
				dest[n] = '\0';
				while (n--)
								dest[n] = src[n];
				return (dest);
}

char	**ft_split(char *str, char *charset)
{
				char	**strs_arr;
				int	size;
				int	index;
				int	n;

				size = ft_wordcount_by_sep(str, charset);
				if (!(strs_arr = malloc((size + 1) * sizeof(char *))))
								return (NULL);
				index = -1;
				while (++index < size)
				{
								while (*str && ft_is_seperator(str, charset))
												str++;
								n = ft_wordlen(str, charset);
								if (!(strs_arr[index] = ft_wordcpy(str, n)))
												return (NULL);
								str += n;
				}
				strs_arr[size] = 0;
				return (strs_arr);
}

int	main(void)
{
				/* char	*strs_with_sep = "daq, recur, bf, gd"; */
				/* char	*heroes_with_sep = "shadow fiend, shadow shaman, naga siren, anti mage, blood seeker, faceless void, juggernaut, medusa, morphling, outword destroyer, phantom asssasin, "; */
				char	*heroes_with_sep = "shadow fiend,shadow shaman,naga siren,anti mage,blood seeker,faceless void,juggernaut,medusa,morphling,outword destroyer,phantom asssasin";
				char	*sep = ",";
				char	**splited_strs;
				int	index;
				int	wordcounts = ft_wordcount_by_sep(heroes_with_sep, sep);

				printf("With strings $%s$\n\n", heroes_with_sep);
				/* printf("All Words lenght without seperator : %d\n", ); */
				printf("Contains $%d$ words\n", wordcounts);
				splited_strs = ft_split(heroes_with_sep, sep);
				index = -1;
				printf("tab start\n");
				while (splited_strs[++index])
				{
								printf("tab[%d]: $%s$\n", index, splited_strs[index]);
								fflush(stdout);
				}
				printf("tab end\n");
}
