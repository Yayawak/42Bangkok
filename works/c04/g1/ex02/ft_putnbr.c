#include <unistd.h>

void	ft_putnbr(int nb);
void	printnbr_rec(int nb, int carry);
void	ft_putnbr(int nb)
{
		printnbr_rec(nb, 0);
}

void	printnbr_rec(int nb, int carry)
{
		char	x;

		if (nb == -2147483648)
		{
				carry += 1;
				nb += 1;
		}
		if (nb < 0)
		{
				x = '-';
				write(1, &x, 1);
				nb *= -1;
		}
		x = '0' + (nb % 10) + carry;
		carry = 0;
		nb /= 10;
		if (nb == 0)
		{
				write(1, &x, 1);
		}
		else
		{
				printnbr_rec(nb, carry);
				write(1, &x, 1);
		}
}

int	main(void)
{
		ft_putnbr(2147483647);
		ft_putnbr(-2147483648);
		ft_putnbr(0);
		return (0);
}
