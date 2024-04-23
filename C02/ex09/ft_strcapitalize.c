#include <stdio.h>
char __tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return (c + 32);
    }

    return (c);
}

char __toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return (c - 32);
    }

    return (c);
}

int __isalnum(char c) {
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int capitalize_word(char *s) {
    int it = 0;

    while (__isalnum(s[it]) && s[it]) {
        if (it == 0) {
            s[it] = __toupper(s[it]);
        } else {
            s[it] = __tolower(s[it]);
        }
        
        it++;
    }   

    return (it);
}

// salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
// Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
char *ft_strcapitalize(char *s) {    
    int it = 0;
    while (s[it]) {
        // skip non alnum.
        while (!__isalnum(s[it]))
            it++;

        it += capitalize_word(s + it);
    }
    return (s);
}
