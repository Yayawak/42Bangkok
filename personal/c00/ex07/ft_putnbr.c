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
	ft_putnbr(-421);
	return 0;

}
