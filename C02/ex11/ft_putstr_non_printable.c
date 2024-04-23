#include <unistd.h>
#include <stdio.h>
int __isprint(char c)
{
    return (c >= 32 && c < 127);
}

int __puts_2hex(char *s) {
    int i = 0;

    while (i < 3) {
        write(1, s + i, 1);
        i++;
    }

    return i;
}

char tohex(char c) {
    if (c % 16 >= 10) {
        return (c % 16 - 10 + 'a');
    }

    return (c % 16 + '0');
}

int print_as_hex(char code) {

    char as_hex_buffer[3] = { 
        [0] = tohex((code / 16)),
        [1] = tohex(code),
        [2] = 0,
    };

    __puts_2hex(as_hex_buffer);
}

void ft_putstr_non_printable(char *str) 
{
    int i = 0;

    while (str[i]) {
        if (__isprint(str[i])) {
            write(1, str + i, 1);
        } else {
            write(1, "\\", 1);
            print_as_hex(str[i]);
        }
        i++;
    }
}
