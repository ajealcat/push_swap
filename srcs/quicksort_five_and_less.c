/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_five_and_less.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/12 16:47:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int	qs_3(int *tab, int *len)
{
	if (tab[0] > tab[1] && tab[1] > tab[2])
	{
		sa(tab);
		rra(tab, *len);
	}
	else if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] > tab[2])
		ra(tab, *len);
	else if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] < tab[2])
		sa(tab);
	else if (tab[0] < tab[1] && tab[1] > tab[2] && tab [0] < tab[2])
	{
		sa(tab);
		ra(tab, *len);
	}
	else if (tab[0] < tab[1] && tab[0] > tab[2] && tab[1] > tab[2])
		rra(tab, *len);
	return (0);
}

int qs_5(int *tab_a, int * tab_b, int len_a, int len_b)
{
	
}
