#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
				int	index;

				index = 0;
				while (str[index])
								index++;
				return (index);
}

char	*ft_strdup(char *src)
{
				char	*dest;
				int	index;

				index = 0;
				// plus 1 because of 'including '\0' as one of dest'
				if ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
								/* if (!(dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1))) */
								/* if (!(dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char)))) */
								return (0);
				/* return (NULL); */
				/* while (src[index] != '\0') */
				while (src[index])
				{
								dest[index] = src[index];
								index++;
				}
				/* src[index] = '\0'; */
				dest[index] = '\0';
				return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
				int	index;

				index = 0;
				while (src[index++])
				{
								dest[index] = src[index];
				}
				dest[index] = '\0';
				return (dest);
}

// return as array of s_stock_str
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
				int	index;
				/* t_stock_str	*stocks; */
				struct s_stock_str	*stocks;
				struct s_stock_str	*created;

				// ????????????
				ac = ac + 0;

				/* if (!(stocks = (t_stock_str*)malloc(ac * sizeof(t_stock_str)))) */
				/* if (!(stocks = (t_stock_str*)malloc((ac + 1) * sizeof(t_stock_str)))) */
				if (!(stocks = (t_stock_str*)malloc((ac + 1) * sizeof(struct s_stock_str))))
								return (NULL);
				index = -1;
				while (++index < ac)
				{
								/* t_stock_str	stock; */
								/* char	*temp_dest = NULL; */
								/* char	temp_dest[200]; */
								/* char	*temp_dest; */
								/* char	temp_dest[ft_strlen(av[index])]; */
								/* char	temp_dest[200]; */

								/* temp_dest = (char *)malloc(ft_strlen(av[index] + 1) * sizeof(char)); */

								if (!(created = (t_stock_str *)malloc(sizeof(struct s_stock_str))))
												return (NULL);
								// ????????????????????
								stocks[index] = *created;
								/* stock.str = av[index]; // invalid ? */
								stocks[index].size = ft_strlen(av[index]);
								stocks[index].str = av[index];
								/* stocks[index].copy = ft_strcpy(temp_dest, av[index]); */
								stocks[index].copy = ft_strdup(av[index]);

								/* stocks[index].copy = (char *)malloc((ft_strlen(temp_dest) + 1) * sizeof(char)); */
								/* ft_strcpy(stock.str, av[index]); */
								/* printf("temp_dest : round %d : $%s$\n", index, temp_dest); */
								/* printf("stock.copy @ %p : round %d : $%s$\n",  stocks[index].copy, index, stocks[index].copy); */
								/* ft_strcpy(stock.copy, av[index]); */
								/* stocks[index] = stock; */
								/* *temp_dest = NULL; */
				}
				stocks[index] = (struct s_stock_str){0, 0, 0};
				return (stocks);
}


