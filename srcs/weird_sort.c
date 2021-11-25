/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weird_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 16:38:05 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	weird_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	if (in_order(tab_a, *len_a) == 0)
	{
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
			find_the_best_way(tab_a, tab_b, len_a, len_b);
	}
	return (0);
}

int	weird_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	count;
	int	big;
	int	small;

	count = 0;
	while (*len_b)
	{
		big = search_biggest(tab_b, *len_b);
		small = search_smallest(tab_b, *len_b);
		if (closest(small, *len_b - small) <= closest(big, *len_b - big))
		{
			to_the_top(tab_b, len_b, small);
			pa(tab_a, tab_b, len_a, len_b);
			ra(tab_a, *len_a);
		}
		else
		{
			to_the_top(tab_b, len_b, big);
			pa(tab_a, tab_b, len_a, len_b);
			++count;
		}
	}
	while (count--)
		ra(tab_a, *len_a);
	return (0);
}

int	weird_sort_hundred_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	if (in_order(tab_a, *len_a) == 0)
	{
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
			ftbw_hundred(tab_a, tab_b, len_a, len_b);
	}
	return (0);
}

int	weird_sort_hundred_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	count;
	int	big;
	int	small;

	count = 0;
	while (*len_b)
	{
		big = search_biggest(tab_b, *len_b);
		small = search_smallest(tab_b, *len_b);
		if (closest(small, *len_b - small) <= closest(big, *len_b - big))
		{
			to_the_top(tab_b, len_b, small);
			pa(tab_a, tab_b, len_a, len_b);
			ra(tab_a, *len_a);
		}
		else
		{
			to_the_top(tab_b, len_b, big);
			pa(tab_a, tab_b, len_a, len_b);
			++count;
		}
	}
	while (count--)
		ra(tab_a, *len_a);
	return (0);
}
