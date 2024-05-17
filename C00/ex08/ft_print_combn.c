#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_put_array(int *array, int n)
{
    char c = 0;
    while (n >= 0) {
        c = *(array + n - 1) + '0';
        write(1, &c, 1);
        n--;
    }
}

void	ft_print_combn(int n)
{
    int array[n];
    int is_valid = 0;
    int it = n - 1;
    int i  = 0;

    while (i < n) {
        array[i] = 0x0;
        i++;
    }

    while (array[0] < 9) 
    {

       
        while (array[it] < 9) {
            ft_put_array(array, n);
            ft_putchar(' ');
            array[it]++;
        }


        i = n - 1;
        while (i > it) {
            array[i] = 0;
            i--;
        }

        it--;
        array[n - 1] += 1;
    }
}
