int	isprint(char c)
{
    return (c >= 32 && c < 127);
}

int	ft_str_is_printable(char *str)
{
    int it = 0;
    while (str[it]) {
        if (isprint(str[it])) {
            it++;
            continue;
        }
        return (0);
    }
    return (1);
}
