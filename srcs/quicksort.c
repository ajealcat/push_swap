/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:18:15 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 14:24:37 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	search_biggest(int *tab, int len)
{
	int	i;
	int	count;
	int	*tab_tmp;

	i = 1;
	count = 0;
	tab_tmp = create_tmp(tab, len);
	while (i < len)
	{
		if (tab_tmp[0] < tab_tmp[i])
		{
			tab_tmp[0] = tab_tmp[i];
			count = i;
		}
		++i;
	}
	free(tab_tmp);
	return (count);
}

int	search_smallest(int *tab, int len)
{
	int	i;
	int	count;
	int	*tab_tmp;

	i = 1;
	count = 0;
	tab_tmp = create_tmp(tab, len);
	while (i < len)
	{
		if (tab_tmp[0] > tab_tmp[i])
		{
			tab_tmp[0] = tab_tmp[i];
			count = i;
		}
		++i;
	}
	free(tab_tmp);
	return (count);
}

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
	while (in_order(tab_a, *len_a) == 0)
	{
		if (*len_a == 2)
			sa(tab_a);
		else if (*len_a == 3)
			qs_three(tab_a, len_a);
		else
			parse_med(tab_a, tab_b, len_a, len_b);
	}
	quick_sort_b(tab_a, tab_b, len_a, len_b);
	return (0);
}

int	quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int	i;

	i = 0;
	if (*len_b == 2 && decrease(tab_b, *len_b) != 1)
		sb(tab_b);
	if (decrease(tab_b, *len_b) == 1)
	{
		while (i < *len_b)
			pa(tab_a, tab_b, len_a, len_b);
		return (0);
	}
	moove_biggest(tab_a, tab_b, len_a, len_b);
	return (0);
}
