#include <unistd.h>
void putc(char c) { write(1, &c, 1); }

unsigned int	ft_strlen(char *str)
{
		unsigned int	len;

		len = 0;
		while (*str != '\0')
		{
				len++;
				str++;
		}
		return (len);
}

void ft_putnbr(int nb, char *base) 
{
		if(nb >= 0 && nb < 10 )	
				putc(nb + '0');
		else if (nb < 0)
		{
				putc('-');
				ft_putnbr(nb*(-1), base); 
		}
		else
		{
				//case 1 : if nb = 42;
				// 42/10 == 4
				// 42=%10 == 2
				//
				//
				//case 2 : if nb = 422;
				// 442/10 == 44 => 44/10 == 4 -> print 4
				// 		   44%10 == 4 -> print 4
				// 442%10 == 2                -> print 2
				ft_putnbr(nb/10, base);
				ft_putnbr(nb%10, base);
		}
}
int main() {
		/* int main(int argc, char **argv) { */

		char	*base16 = "0123456789ABCDEF";
		char	*base10 = "0123456789";
		char	*base8 = "0123456789";
		char	*base3 = "0123456789";
		char	*base2 = "0123456789";

		ft_putnbr(-421, base10);
		/* ft_putnbr((int)argv[1]); */
		/* ft_putnbr(*argv[1]); */
		/* ft_putnbr(*argv[1] + '0'); */
		return 0;

}
