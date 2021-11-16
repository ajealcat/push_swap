/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_five_and_less.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/16 17:37:37 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int	qs_three(int *tab, int *len)
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

int	quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;

	while (in_order(tab_a, *len_a) == 0)
	{
		i = 0;
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
		{
			mediane = find_mediane(tab_a, *len_a);
			while(*len_a > i)
			{
				if (tab_a[0] >= mediane)
				{
					ra(tab_a, *len_a);
					++i;
				}
				else
					pb(tab_a, tab_b, len_a, len_b);
			}
		}
	}
	quick_sort_b(tab_a, tab_b, len_a, len_b);
	return (0);
}

int	quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int i;
	int biggest;

	i = 0;
	if (*len_b == 0)
		return (0);
	if (*len_b == 2 && decrease(tab_b, *len_b) != 1)
		sb(tab_b);
	if (decrease(tab_b, *len_b) == 1)
	{
		while (i < *len_b)
			pa(tab_a, tab_b, len_a, len_b);
		return (0);
	}
	while (*len_b)
	{
		biggest = search_biggest(tab_b, *len_b); 
		if(biggest <= *len_b / 2)
		{
			while(biggest)
			{
				rb(tab_b, *len_b);
				--biggest;
			}
			pa(tab_a, tab_b, len_a, len_b);
		}
		else if(biggest > *len_b / 2)
		{
			biggest = *len_b - biggest;
			while(biggest)
			{
				rrb(tab_b, *len_b);
				--biggest;
			}
			pa(tab_a, tab_b, len_a, len_b);
		}
	}
	return (0);
}
