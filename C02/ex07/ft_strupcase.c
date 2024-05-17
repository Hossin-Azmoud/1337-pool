char	toupper(char c) {
    if (c >= 'a' && c <= 'z') {
        return (c - 32);
    }

    return (c);
}

char	*ft_strupcase(char *str) {
    int it = 0;
    while (str[it]) {
        str[it] = toupper(str[it]);
        it++;
    }

    return (str);
}
