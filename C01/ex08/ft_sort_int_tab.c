void ft_sort_int_tab(int *tab, int size)
{
    int i, j, tmp;
    i = 0;
    j = 0;
    while (i < size - 1) {
        while (j < size - i - 1) {
            if(tab[j] > tab[j+1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
