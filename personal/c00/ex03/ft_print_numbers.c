#include <unistd.h>

void ft_print_numbers(void) {
    // int i = 0;
    char numStartChar = '0';


    //while (numStartChar < '10') { // big : '10' is not char !!
    while (numStartChar <= '9') {
        write(1, &numStartChar, 1);
        numStartChar++;
    }
    // while (i<10){
    //     write(1, &i, 1);
    //     i++;
    // }
}

int main() {
    ft_print_numbers();
    return 0;
}
