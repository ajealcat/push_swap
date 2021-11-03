/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:18:15 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/03 16:24:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	in_order(int *tab, int len)
{
	int i;
	int j;

	i = 0;
	while(i < len)
	{
		j = i + 1;
		if(tab[i] < tab[j])
			++i;
		else 
			return(1);
	}
	return(0);
}

int	quick_sort_a(int *tab_a, int *tab_b, int len_a, int len_b)
{
	int mediane;
	int i;
	int j;

	i = 0;
	mediane = find_mediane(tab_a, len_a);
	printf("mediane : %d\n", mediane);
	if(in_order(tab_a, len_a) == 0)
		return (0);
	else if (len_a == 2)
	{
		sa(tab_a);
//		return (0);
	}
	while(len_a > i)
	{
		if (tab_a[0] <= mediane)
		{
			ra(tab_a, len_a);
			++i;
		}
		else
		{
			pb(tab_a, tab_b, len_a, len_b);
			++len_b;
			--len_a;
		}
	}
	j = 0;
	while(j < len_a)
	{
		printf("tab a : %d\n", tab_a[j]);
		j++;
	}
	j = 0;
	while(j < len_b)
	{
		printf("tab b : %d\n", tab_b[j]);
		j++;
	}
	return (quick_sort_a(tab_a, tab_b, len_a, len_b) 
		&& quick_sort_b(tab_a, tab_b, len_a, len_b));
}

int	quick_sort_b(int *tab_a, int *tab_b, int len_a, int len_b)
{
	int mediane;
	int i;

	i = 0;
	mediane = find_mediane(tab_b, len_b);
	if (len_b == 2 && in_order(tab_b, len_b) != 0)
		sb(tab_b);
	if (in_order(tab_b, len_b) == 0)
	{
		while(i < len_b)
		{
			pa(tab_a, tab_b, len_a, len_b);
			ra(tab_a, len_a);
			--len_b;
			++len_a;
			return (0);
		}
	}
	while(len_b > i)
	{
		if (tab_b[0] >= mediane)
		{
			rb(tab_b, len_b);
			++i;
		}
		else
		{
			pa(tab_a, tab_b, len_a, len_b);
			ra(tab_a, len_a);
			--len_b;
			++len_a;
		}
	}
	return(quick_sort_a(tab_a, tab_b, len_a, len_b) 
		&& quick_sort_b(tab_a, tab_b, len_a, len_b));
}
