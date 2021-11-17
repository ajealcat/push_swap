/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_five_and_less.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/17 17:03:06 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
/*
static int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

static void	print_stacks(int *tab_a, int *tab_b, int len_a, int len_b)
{
	int	i;
	int	a;
	int	b;

	printf(" A	B \n");
	i = 0;
	while (i < ft_max(len_a, len_b))
	{
		if (i < len_a)
			a = tab_a[i];
		else
			a = 0;
		if (i < len_b)
			b = tab_b[i];
		else
			b = 0;
		printf("| %d | %d |\n", a, b);
		++i;
	}
	printf("______________\n");
}
*/
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

int	weird_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;
	int it;
	int count;

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
//				printf("i : %d\n", i);
				count = *len_a - i;
				mediane = find_it(tab_a, *len_a, it);
				while(i--)
				{
					if (tab_a[0] >= mediane && it != 8)
						ra(tab_a, *len_a);	
					else
						pb(tab_a, tab_b, len_a, len_b);
				}
			//	print_stacks(tab_a, tab_b, *len_a, *len_b);
				while(count--)
					ra(tab_a, *len_a);
				weird_sort_b(tab_a, tab_b, len_a, len_b);
			//	print_stacks(tab_a, tab_b, *len_a, *len_b);
				++it;
			}
		}
	}
//	print_stacks(tab_a, tab_b, *len_a, *len_b);
//	printf("len a : %d\n", *len_a);
	return (0);
}

int	weird_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int count;
	int biggest;
	int smallest;

	count = 0;
	while (*len_b)
	{
		biggest = search_biggest(tab_b, *len_b); 
		smallest = search_smallest(tab_b, *len_b);
		if (is_closest(smallest, *len_b - smallest) <= is_closest(biggest, *len_b - biggest))
		{
			to_the_top(tab_b, len_b, smallest);
			pa(tab_a, tab_b, len_a, len_b);
			ra(tab_a, *len_a);
		}
		else
		{
			to_the_top(tab_b, len_b, biggest);
			pa(tab_a, tab_b, len_a, len_b);
			++count;
		}
	}
	while(count--)
		ra(tab_a, *len_a);
	return (0);
}

int is_closest(int i, int len)
{
	if (len < i)
		return (len);
	return (i);
}

int to_the_top(int *tab_b, int *len_b, int nb)
{
	if(nb <= *len_b / 2)
	{
		while(nb)
		{
			rb(tab_b, *len_b);
			--nb;
		}
	}
	else if(nb > *len_b / 2)
	{
		nb = *len_b - nb;
		while(nb)
		{
			rrb(tab_b, *len_b);
			--nb;
		}
	}
	return(0);
}
