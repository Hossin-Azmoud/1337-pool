#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void write_comb(int x, int y, int z) {
    ft_putchar(('0' + x));
    ft_putchar(('0' + y));
    ft_putchar(('0' + z));
    if (x < 7 || y < 8 || z < 9) {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    int x, y, z;

    x = 0; 
    y = 0; 
    z = 0;
 
    while (x < 8) {
        y = x + 1;
        while (y < 9) {
            z = y + 1;
            while (z < 10) {             
                write_comb(x, y, z); 
                z++;
            }   
            y++;
        }
        x++;
    }
}
