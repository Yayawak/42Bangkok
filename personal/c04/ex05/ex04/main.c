#include <stdio.h>
#include <string.h>
#include "ft_putnbr_base.c"

int main() {
	/* int main(int argc, char **argv) { */

	char	*base16 = "0123456789ABCDEF";
	char	*base10 = "0123456789";
	char	*base8 = "0123456789";
	char	*base3 = "0123456789";
	char	*base2 = "0123456789";

	ft_putnbr_base(-421, base16);
	ft_putnbr_base(-10, base16);
	/* ft_putnbr((int)argv[1]); */
	/* ft_putnbr(*argv[1]); */
	/* ft_putnbr(*argv[1] + '0'); */
	return 0;

}
