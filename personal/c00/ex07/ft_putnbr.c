#include <unistd.h>
void putc(char c) { write(1, &c, 1); }

/*
void ft_putnbr(int nb) {
	if(nb >= 0 && nb < 10 )
        // 2. 4 printed
        // 2. 4 printed
        // 1. 2 printed
		putc(nb + '0');
	else if (nb < 0)
	{
		putc('-');
		ft_putnbr(nb*(-1));
	}
	else
	{
        // # 1. 442 / 10 = 44
        // 2. 44 / 10 = 4
		ft_putnbr(nb/10);

        // 2. 44 % 10 = 4
        // # 1. 442 % 10 = 2
		ft_putnbr(nb%10);
	}
}
int main() {
	ft_putnbr(422);
	return 0;

}
*/

void ft_putnbr(int nb) {
	if(nb >= 0 && nb < 10 )
		putc(nb + '0');
	else if (nb < 0)
	{
		putc('-');
		ft_putnbr(nb*(-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
int main() {
	ft_putnbr(-462);
	return 0;

}
