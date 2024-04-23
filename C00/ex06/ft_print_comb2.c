#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int x, y;

    x = 0; 
    y = 0; 

    while (x < 8) {
        while (y < 9) {
            
            if (y != x) {
                ft_putchar(('0' + x));
                ft_putchar(('0' + y));
                if (x < 7 || y < 8) {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
            y++;
        }
        y = 0;
        x++;
    }
}
