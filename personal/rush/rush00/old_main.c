#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1); 
}
void rush(int x, int y) {
	ft_putchar(x+'0');
	ft_putchar(',');
	ft_putchar(y+'0');
	ft_putchar('\n');
	if(x<=0 || y<=0) return;
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
int main(){
	int y=10;
	int x=10;
	for(int j=0;j<x;j++) {
		for(int i=0;i<y;i++){
			rush(i,j);
		}
	}
//	rush(1,1);
	return 0;
}
