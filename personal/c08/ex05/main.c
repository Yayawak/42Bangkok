#include <stdio.h>
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

int	main(void)
{
				int	ac = 3;
				char	**heroes;
				char	*heroes_bf_alloc[3] = {"naga siren", "dragon knight", "terror blade"};
				int	index;
				struct s_stock_str	*strz_structs;
				heroes = (char **)malloc((ac + 1) * sizeof(char *));
				/* heroes = (char **)malloc((ac) * sizeof(char *)); */
				index = 0;
				while (index < ac)
				{
								/* heroes[index] = (char *)malloc((40) * sizeof(char)); */
								heroes[index] = heroes_bf_alloc[index];
								index++;
				}
				printf("\n===========================================\n");
				strz_structs = ft_strs_to_tab(ac, heroes);
				printf("\n-------------------------------------------\n");

				ft_show_tab(strz_structs);

				free(strz_structs);
				return (1);
}

