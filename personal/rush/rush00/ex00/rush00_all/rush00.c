#include "ft_putchar.c"
void rush(int x, int y) {
	char not_neg_str[] = "Input x,y must be positive.";
//	ft_putchar(x+'0');
//	ft_putchar(',');
//	ft_putchar(y+'0');
//	ft_putchar('\n');
	if(x<=0 || y<=0) {
		int i = 0;
		while(not_neg_str[i] != '\0'){
			ft_putchar(not_neg_str[i]);
			i++;
		}
		ft_putchar('\n');
		return;
	}
	for(int row=0; row<y; row++){
		if(row==0 || row==y-1) 
		{
			ft_putchar('o');
			int k = 0;
			while(k < x-2) {
				ft_putchar('-');
				k++;
			}
			if(x!=1) ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
			int k = 0;
			while(k < x-2) {
				ft_putchar(' ');
				k++;
			}
			if(x!=1) ft_putchar('|');
		}
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
