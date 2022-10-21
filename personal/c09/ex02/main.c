#include <stdio.h>
#include <string.h>
#include "ft_split.c"

/* int	main(int argc, char **argv) */
int	main(void)
{
				int	index;
				char	**splited;

				/* argc = argc + 0; */
				/* argc = 3; */
				/* argv[1] = "index, fname, lname, nickname, salary, bacholer"; */
				/* int	arc = 3; */
				/* char *str = "index, fname, lname, nickname, salary, bacholer"; */
				char *sep = ", ";

				char	*str_test = "a,b,ddd,e";
				/* char	*str_test = "a,b,c,e"; */
				printf("Count $%s$ : occ: %d\n", str_test, count_occur(str_test, ","));


				/* splited = ft_split(argv[1], argv[2]); */
				/* splited = ft_split(str, sep); */
				splited = ft_split(str_test, sep);
				index = 0;
				printf("Tab start\n");
				while (splited[index])
				{
								printf("tab[%d]: $%s$\n", index, splited[index]);
								fflush(stdout);
								index++;
				}
				printf("Tab end\n");
				return (0);
}
