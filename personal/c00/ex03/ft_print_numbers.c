#include <unistd.h>

void ft_print_numbers(void) {
    char numStartChar = '0';

    while (numStartChar <= '9') {
        write(1, &numStartChar, 1);
        numStartChar++;
    }
}

int main() {
    ft_print_numbers(129);
    return 0;
}
