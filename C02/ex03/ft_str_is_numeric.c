int isdigit(char c) {
    return (c >= '0' && c =< '10');
}

int ft_str_is_numeric(char *str) {
    int it = 0;

    while (str[it]) {
        if (isdigit(str[it])) {
            it++;
            continue;
        }
        return (0);
    }

    return (1);
}
