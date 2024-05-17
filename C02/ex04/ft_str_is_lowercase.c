int	islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
    int it = 0;
    while (str[it]) {
        if (islower(str[it])) {
            it++;
            continue;
        }
        return (0);
    }
    return (1);
}
