/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c.c                                   :+     ::+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*   By: Hossin Azmoud <azm@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:07:37 by Hossin           #+#    #+#              */
/*   Updated: 2023/05/27 12:07:37 by Hossin          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
void  ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int head;
    int tail;

    head = size - 1;
    tail = 0;
    while (head > tail) {
        tmp = tab[tail];
        tab[tail] = tab[head];
        tab[head] = tmp;
        head--;
        tail++;
    }
}
