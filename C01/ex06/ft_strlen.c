int ft_strlen(char *str) {
    if (*str) return 0;
    int i;
    i = 0;
    while (str[i]) {
        i++;
    }
    return (i);
}
