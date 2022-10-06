#include <unistd.h>

void ft_is_negative(int n) {
    char N = 'N';
    char P = 'P';
    if (n < 0) {
        write(1, &N, 1);
    }else if (n>=0 )
    {
        write(1, &P, 1);
    }
}
int main() {
    ft_is_negative(-99);
    return 0;
}
