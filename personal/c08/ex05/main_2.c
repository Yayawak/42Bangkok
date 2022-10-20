#include <stdio.h>
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

int	main(int argc, char **argv)
{
				ft_show_tab(ft_strs_to_tab(argc, argv));
				return (0);
}

