#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
    
}

void ft_print_comb2() {
	int a;
	int b;

	a  =-1;
//	b  =-1;
	int counter = 1;
	while (a++ < 98 ) 
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar((a / 10) +'0');
			ft_putchar((a % 10) +'0');
			ft_putchar(' ');
			ft_putchar((b / 10) +'0');
			ft_putchar((b % 10) +'0');
			if(a!=98){
				ft_putchar(',');
				ft_putchar(' ');
			}

		}
		counter++;
	}
	ft_putchar('\n');
//	ft_putchar(counter +'0');

}
int main() {
    ft_print_comb2();
    return 0;
}
