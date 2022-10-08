#include <unistd.h>

void putc(char c) { write(1, &c, 1); }
void puts(char *str) {
	for (; *str != '\0'; str++) {
		putc(*str);

	}

}
void printout(int n, int *tab, int pos) {
	if(pos==1){
		putc(',');
		putc(' ');
	}
	int i=-1;
	while(i++<n) {
		putc(tab[i]+'0');
	}

}
void print_combn_increment(int n, int *tab)
{
	int i = n-1, max = 9;
	while(tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i]++;
	while(i<n)
	{
		tab[i+1] = tab[i] + 1;
		i++;
	}
}
void ft_print_combn(int n) {
	if(!(n>0 && n<10)){
		char* str = "N must between 0 to 10";
		puts(str);
	}

	int tab[10];
	int i=-1;
	while(i++<n) {
		tab[i] = i; 
	}
	printout(n, tab, 0);

	while(tab[0] != 10-n || tab[n-1] != 9) 
	{
		if(tab[n-1] != 9)
		{
			tab[n-1] += 1;
		}
		else
		{
			print_combn_increment(n, tab);
		}
		printout(n, tab, 1);
	}
}
int main(  ){
	ft_print_combn(2);
	return 0;
}
