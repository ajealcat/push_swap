/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:18:15 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/04 14:23:29 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	in_order(int *tab, int len)
{
	int i;

	i = 0;
	while(i + 1 < len)
	{
		if(tab[i] < tab[i + 1])
			++i;
		else 
			return(0);
	}
	return(1);
}

int	quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;

	i = 0;
	mediane = find_mediane(tab_a, *len_a);
	if(in_order(tab_a, *len_a) == 1)
		return (1);
	else if (*len_a == 2)
	{
		sa(tab_a);
		return (1);
	}
	while(*len_a > i)
	{
		if (tab_a[0] <= mediane)
		{
			ra(tab_a, *len_a);
			++i;
		}
		else
		{
			pb(tab_a, tab_b, *len_a, *len_b);
			++*len_b;
			--*len_a;
		}
	}
	return (quick_sort_a(tab_a, tab_b, len_a, len_b)
	&& quick_sort_b(tab_a, tab_b, len_a, len_b));
}

int	quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;

	i = 0;
	mediane = find_mediane(tab_b, *len_b);
	if (*len_b == 2 && in_order(tab_b, *len_b) != 1)
		sb(tab_b);
	if (in_order(tab_b, *len_b) == 1)
	{
		while(i < *len_b)
		{
			pa(tab_a, tab_b, *len_a, *len_b);
			ra(tab_a, *len_a);
			--*len_b;
			++*len_a;
		}
		return(1);
	}
	while(*len_b > i)
	{
		if (tab_b[0] >= mediane)
		{
			rb(tab_b, *len_b);
			++i;
		}
		else
		{
			pa(tab_a, tab_b, *len_a, *len_b);
			ra(tab_a, *len_a);
			--*len_b;
			++*len_a;
		}
	}
	return(quick_sort_a(tab_a, tab_b, len_a, len_b) 
		&& quick_sort_b(tab_a, tab_b, len_a, len_b));
}
