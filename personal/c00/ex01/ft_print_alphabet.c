#include <unistd.h>

void ft_print_alphabet(void);
void ft_print_alphabet(void) {
    char start = 'a';
    while ( start <= 'z') {
        write(1, &start, 1);
        start++;
    }
}
int main() {
    ft_print_alphabet();
    return 0;
}
