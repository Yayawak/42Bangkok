#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}
void ft_print_comb(){
    char first;
    char second;
    char last;

    first = '0';
    while (first <= '7') {
        second = first+1;
        while(second <= '8') {
            last = second + 1;
            while (last <= '9') {
                ft_putchar(first);
                ft_putchar(second);
                ft_putchar(last);
                if(first != '7') {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                last++;
            }
            second++;
        }
        first++;
    }

}
// void xxx() {
//     int n = (8*8-7);
//     char triplet[9][9][3];
//     for(int i=0; i<9; i++) {
//         for(int j=0; j<9; j++) {
//             triplet[i][j][0] = '0';
//             triplet[i][j][1] = i;
//             triplet[i][j][2] = j;
//             for (int k=0; k<3; k++) {
//                 // write(1, &triplet[i][j][k], 1);
//                 ft_putchar(triplet[i][j][k]);
//             }
//         }
//     }
// }

int main() {
    ft_print_comb();
    // xxx();
    return 0;
}
