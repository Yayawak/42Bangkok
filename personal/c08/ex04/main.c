#include <stdio.h>
#include "ft_strs_to_tab.c"

int	main(void)
{
				int	ac = 3;
				/* char	**heroes; */
				/* char	*heroes[3]; */
				char	**heroes;
				/* char	*heroes_bf_alloc[3]; */
				char	*heroes_bf_alloc[3] = {"naga siren", "dragon knight", "terror blade"};
				int	index;
				/* printf("Here\n"); */

				/* heroes[0] = "naga siren"; */
				/* heroes[1] = "dragon knight"; */
				/* heroes[2] = "terror blade"; */
				/* heroes = {"naga siren", "dragon knight", "terror blade"}; */


				struct s_stock_str	*strz_structs;
				/* heroes = (char **)malloc((ac + 1) * sizeof(char *)); */
				// MALLOC BEFORE ACCESSING VALUE'S ADDRESS
				heroes = (char **)malloc((ac) * sizeof(char *));
				printf("\n");
				printf("sizeof strz_structs.size => %lu\n", sizeof(int));
				printf("sizeof strz_structs.str  => %lu\n", sizeof(char *));
				printf("sizeof strz_structs.copy => %lu\n", sizeof(char *));
				printf("\nSIZEOF strz_structs => %lu\n\n", sizeof(struct s_stock_str));
				/* printf("\nSIZEOF strz_structs => %d\n\n", sizeof(s_stock_str)); */
				printf("\n===========================================\n");


				index = 0;
				while (index < ac)
				{
								/* heroes[index] = (char *)malloc((2 + 1) * sizeof(char)) */
								/* heroes[index] = (char *)malloc((40) * sizeof(char)); */
								heroes[index] = heroes_bf_alloc[index];
								printf("heroes[%d] = %s\n", index, heroes[index]);
								index++;
				}
				printf("\n===========================================\n");



				strz_structs = ft_strs_to_tab(ac, heroes);

				printf("\n-------------------------------------------\n");


				index = 0;	
				while (index < ac)
				{
								printf("heroes[%d]\n", index);
								printf("\toriginal $%s$\n", strz_structs[index].str);
								printf("\t copied  $%s$\n", strz_structs[index].copy);
								printf("\t   size  $%d$\n\n", strz_structs[index].size);

								/* free(strz_structs[index]); */
								index++;	
				}
				free(strz_structs);
				return (1);
}
