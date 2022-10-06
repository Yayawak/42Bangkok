#include <unistd.h>

void ft_print_reverse_alphavet(void) {
    char al = 'z';
    while (al >= 'a') {
        write(1, &al, 1);
        al--;
    }

}
int main() {
    ft_print_reverse_alphavet();
    return 0;
}
