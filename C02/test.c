#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <bsd/string.h>
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"
#include "./ex12/ft_print_memory.c"

char *__sdup(const char *s) {
    char *s_ = malloc(strlen(s));
    s_ = strcpy(s_, s);
    return s_;
}
void test_strcap(const char *s) {
    char sen[2048] = { 0 };

    strcpy(sen, s);
    printf("IN: |%s|\n", sen);
    ft_strcapitalize(sen);
    printf("OUT: |%s|\n", sen);
}


int main() {
    {

        test_strcap("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
        test_strcap("jello");
        test_strcap("");
        test_strcap("u are crazy");
    
    }
    {
        char m[1024], n[1024];
        strcpy(m, "Hello");
        strcpy(n, "world");
        printf("m = %s\n", m);
        printf("n = %s\n", n);
        ft_strlcpy(n, m, strlen(m));
        printf("m = %s\n", m);
        printf("n = %s\n", n);
    }
    {

        char buff[10] = "Hello  \n";
        buff[6]       = 127;
        printf("%i\n", buff[6]);
        ft_putstr_non_printable(buff);
        printf("\n");

    }
    
    {
        unsigned int size = 10;
        char **addrs = malloc(sizeof (char *) * size);

        for (int i = 0; i < 10; i++) {
            if (i & 1) {
                addrs[i] = __sdup("abcdjk..");
            } else {
                addrs[i] = __sdup("..abcdjkss");
            }
        }

        ft_print_memory((void*)addrs, size);
        free(addrs);
    }
    return (0);
}



