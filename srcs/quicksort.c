/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:18:15 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/10 12:43:55 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	is_biggest(int *tab, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if (tab[0] < tab[i])
			return (1);
		++i;
	}
	return (0);
}

int	quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;

	i = 0;
	if(*len_a == 0 || in_order(tab_a, *len_a) == 1)
		return (0);
	else if (*len_a == 2)
	{
		sa(tab_a);
		return (0);
	}
	mediane = find_mediane(tab_a, *len_a);
	while(*len_a > i)
	{
		if (tab_a[0] >= mediane && tab_a[0] > tab_a[1])
		{
			ra(tab_a, *len_a);
			++i;
		}
		else if (tab_a[0] >= mediane && tab_a[0] < tab_a[1])
		{
			sa(tab_a);
			ra(tab_a, *len_a);
			++i;
			ra(tab_a, *len_a);
			++i;
		}
		else
		{
			pb(tab_a, tab_b, len_a, len_b);
		}
	}
	quick_sort_a(tab_a, tab_b, len_a, len_b); 
	quick_sort_b(tab_a, tab_b, len_a, len_b);
	return (0);
}


int	quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;
	int j;

	i = 0;
	if (*len_b == 0)
		return (0);
	if (*len_b == 2 && decrease(tab_b, *len_b) != 1)
		sb(tab_b);
	if (decrease(tab_b, *len_b) == 1)
	{
		while(i < *len_b)
			pa(tab_a, tab_b, len_a, len_b);
		return(0);
	}
	mediane = find_mediane(tab_b, *len_b);
	j = 1;
	while(*len_b > i)
	{
		if (tab_b[0] < mediane)
		{
			rb(tab_b, *len_b);
			++i;
		}
		if (tab_b[0] >= mediane)
		{
			if (is_biggest(tab_b, *len_b) == 0)
				pa(tab_a, tab_b, len_a, len_b);
			else
			{
				rb(tab_b, *len_b);
				++i;
			}
		}
	}
	quick_sort_a(tab_a, tab_b, len_a, len_b); 
	quick_sort_b(tab_a, tab_b, len_a, len_b);
	return (0);
}
