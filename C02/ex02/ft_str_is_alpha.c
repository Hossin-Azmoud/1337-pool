int isalpha(char c) {
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

int ft_str_is_alpha(char *str) {
    int it = 0;

    while (str[it]) {
        if (isalpha(str[it])) {

            it++;
            continue;
        }
        return 0;
    }

    return 1;
}
