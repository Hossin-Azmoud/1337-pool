
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char start;
    char end;

    start = 'z';
    end   = 'a';
    while (1) {
        write(1, &start, 1);
        if (start == end) 
            break ;
        start--;
    }
}

