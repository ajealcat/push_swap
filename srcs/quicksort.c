/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:18:15 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/03 14:39:10 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while(len_a > i)
	{
		j = i + 1;
		if(in_order == 0)
			return (0);
		else if (len_a == 2)
		{
			sa(tab_a);
			return (0);
		}
		else
		{
			if (tab_a[i] <= mediane)
				ra(tab_a, len_a);
			else
			{
				pb(tab_a, tab_b, len_a, len_b);
				++len_b; 
			}
		}
		++i;
	}
	return(quick_sort_a(tab_a, tab_b, len_a, len_b) && )
}
