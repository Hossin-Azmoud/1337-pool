char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return (c + 32);
    }

    return (c);
}

char *ft_strlowcase(char *str) {
    int it = 0;

    while (str[it]) {
        str[it] = tolower(str[it]);
        it++;
    }

    return (str);
}
