#include <unistd.h>
void putc(char c) { write(1, &c, 1); }

void ft_putnbr(int nb) {
	// BLOCK A : handle single digit
	if(nb >= 0 && nb < 10 )	
		putc(nb + '0');
	// BLOCK B : add '-' && turn - -> + && call recursive fn
	else if (nb < 0)
	{
		putc('-');
		// change neg to pos -> throws to block C
		ft_putnbr(nb*(-1)); 
	}
	// BLOCK C : handle multiple digit
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
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
}
int main() {
/* int main(int argc, char **argv) { */
		
	ft_putnbr(-421);
	/* ft_putnbr((int)argv[1]); */
	/* ft_putnbr(*argv[1]); */
	/* ft_putnbr(*argv[1] + '0'); */
	return 0;

}
