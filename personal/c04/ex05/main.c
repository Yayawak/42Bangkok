#include <stdio.h>
#include <string.h>
#include "ft_atoi_base.c"

int main() {
	/* int main(int argc, char **argv) { */

	/* char	*base16 = "0123456789ABCDEF"; */
	char	*base16 = "0123456789abcdef";
	char	*base10 = "0123456789";
	char	*base8 = "0123456789";
	char	*base3 = "0123456789";
	char	*base2 = "0123456789";

	char	*num_string = "-12";
	printf("String : %s\n", num_string);
	int k = ft_atoi_base(num_string, base16);
	printf("Integer : %d\n", k);
	/* ft_putnbr_base(-10, base16); */
	/* ft_putnbr((int)argv[1]); */
	/* ft_putnbr(*argv[1]); */
	/* ft_putnbr(*argv[1] + '0'); */
	
	printf("%d\n", ft_atoi_base("BAEBDECBBBGB", "ABCDEFG"));
	printf("%d\n", ft_atoi_base(" --++--++--++-012345a6789", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base(" --++--++--++-012345a6789", "01234 56789"));
	printf("%d\n", ft_atoi_base(" --++--++--++-012345a6789", 0));
	printf("%d\n", ft_atoi_base(0, 0));
	printf("%d\n", ft_atoi_base(0, "12345"));	
	return 0;

}
