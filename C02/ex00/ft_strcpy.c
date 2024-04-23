
char *ft_strcpy(char *dest, char *src) {
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }

    return dest;
}
