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
				t_stock_str	*stocks;


				if (!(stocks = (t_stock_str*)malloc(ac * sizeof(t_stock_str))))
								return (NULL);
				index = 0;
				while (index < ac)
				{
								t_stock_str	stock;
								/* stock -> str = av[index]; */
								/* stock.str = av[index]; // invalid ? */
								stock.size = ft_strlen(av[index]);
								ft_strcpy(stock.str, av[index]);
								/* ft_strcpy(stock.copy, av[index]); */
								/* stocks[index] = stock; */


				}

				return (stocks);
}

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
				int	ac = 3;
				/* char	**heroes; */
				char	*heroes[3];
				int	index;

				heroes[0] = "naga siren";
				heroes[1] = "dragon knight";
				heroes[2] = "terror blade";

				/* char	*heroes[3] = {"naga siren", "dragon knight", "terror blade"}; */
				/* heroes = {"naga siren", "dragon knight", "terror blade"}; */
				t_stock_str	*stocks;
				printf("Here");
				stocks = ft_strs_to_tab(ac, heroes);
				index = 0;	
				while (index < ac)
				{
								printf("string[%d] : $%s$\n", index, stocks[index].str);
								index++;	
				}
				return (1);
}
