/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weird_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/23 12:47:21 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	weird_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	mediane;
	int	i;
	int	it;
	int	count;

	if (in_order(tab_a, *len_a) == 0)
	{
		i = 0;
		it = 1;
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
		{
			while (it <= 8 && in_order(tab_a, *len_a) == 0)
			{
				i = *len_a * (8 - (it - 1)) / 8;
				count = *len_a - i;
				mediane = find_it(tab_a, *len_a, it);
				while (i--)
				{
					if (tab_a[0] >= mediane && it != 8)
						ra(tab_a, *len_a);
					else
						pb(tab_a, tab_b, len_a, len_b);
				}
				if (count <= *len_a / 2)
				{
					while (count--)
						ra(tab_a, *len_a);
				}
				else
				{
					count = *len_a - count;
					while (count--)
						rra(tab_a, *len_a);
				}
				weird_sort_b(tab_a, tab_b, len_a, len_b);
				++it;
			}
		}
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
	int	mediane;
	int	i;
	int	it;
	int	count;

	if (in_order(tab_a, *len_a) == 0)
	{
		i = 0;
		it = 1;
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
		{
			while (it <= 3 && in_order(tab_a, *len_a) == 0)
			{
				i = *len_a * (3 - (it - 1)) / 3;
				count = *len_a - i;
				mediane = find_it_hundred(tab_a, *len_a, it);
				while (i--)
				{
					if (tab_a[0] >= mediane && it != 3)
						ra(tab_a, *len_a);
					else
						pb(tab_a, tab_b, len_a, len_b);
				}
				if (count <= *len_a / 2)
				{
					while (count--)
						ra(tab_a, *len_a);
				}
				else
				{
					count = *len_a - count;
					while (count--)
						rra(tab_a, *len_a);
				}
				weird_sort_b(tab_a, tab_b, len_a, len_b);
				++it;
			}
		}
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
