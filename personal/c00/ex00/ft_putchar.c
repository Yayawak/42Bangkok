#include <unistd.h>
// #include <conio.h>

void ft_putchar(char c);

void ft_putchar(char c) {
	write(1, &c, 1);
}
int main() {
	ft_putchar('H');
	return 0;
}
