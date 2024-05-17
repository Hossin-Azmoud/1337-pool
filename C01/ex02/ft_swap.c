/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c.c                                   :+     ::+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*   By: Hossin Azmoud <azm@student.42.fr>            +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:53:48 by Hossin           #+#    #+#              */
/*   Updated: 2024/05/17 18:53:48 by Hossin          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
