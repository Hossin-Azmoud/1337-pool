void ft_ultimate_div_mod(int *a, int *b) {
    int oa, ob;
    oa = *a;
    ob = *b;
    *a = oa/ob;
    *b = oa%ob;
}
