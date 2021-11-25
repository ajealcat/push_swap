/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:15:23 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 16:38:03 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_med(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	mediane;
	int	i;

	i = 0;
	mediane = find_mediane(tab_a, *len_a);
	while (*len_a > i)
	{
		if (tab_a[0] >= mediane)
		{
			ra(tab_a, *len_a);
			++i;
		}
		else
			pb(tab_a, tab_b, len_a, len_b);
	}
	return (0);
}

void	moove_a(int count, int *tab_a, int *len_a)
{
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
}

void	ftbw_hundred(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	i;
	int	it;
	int	count;
	int	mediane;

	it = 1;
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
		moove_a(count, tab_a, len_a);
		weird_sort_hundred_b(tab_a, tab_b, len_a, len_b);
		++it;
	}
}
