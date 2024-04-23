int isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_str_is_uppercase(char *str)
{
    int it = 0;
    while (str[it]) {
        if (isupper(str[it])) {
            it++;
            continue;
        }
        return (0);
    }
    return (1);
}
