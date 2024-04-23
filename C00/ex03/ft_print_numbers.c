#include <unistd.h>

void ft_print_numbers(void)
{
    int  start = 0;
    char digit = 0;
    while (start < 10) {
        digit = '0' + start;
        write(
            1,
            &digit,
            1
        );
        start++;
    }
}
