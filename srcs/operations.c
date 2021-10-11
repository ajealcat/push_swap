/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:34:05 by ajearuth          #+#    #+#             */
/*   Updated: 2021/10/11 19:11:21 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *tab_a)
{
	int keep;

	if (tab_a[0] && tab_a[1])
	{
		keep = tab_a[0];
		tab_a[0] = tab_a[1];
		tab_a[1] = keep;
		write(1, "sa\n", 3);
	}
}

void	sb(int *tab_b)
{
	int keep;

	if (tab_b[0] && tab_b[1])
	{
		keep = tab_b[0];
		tab_b[0] = tab_b[1];
		tab_b[1] = keep;
		write(1, "sb\n", 3);
	}
}

void	ss(int *tab_a, int *tab_b)
{
	int keep_a;
	int keep_b;

	if ((tab_a[0] && tab_a[1]) && (tab_b[0] && tab_b[1]))
	{
		keep_a = tab_a[0];
		keep_b = tab_b[0];
		tab_a[0] = tab_a[1];
		tab_b[0] = tab_b[1];
		tab_a[1] = keep_a;
		tab_b[1] = keep_b;
		write(1, "ss\n", 3);
	}
}

void	pa(int *tab_a, int *tab_b, int len_a, int len_b)
{
	int i;
	int keep;
	int tmp;

	i = 0;
	keep = tab_a[0];
	if (len_b == 0)
		return ;
	while(i < len_a)
	{ 
		tmp = tab_a[i + 1];
		tab_a[i + 1] = keep;
		keep = tmp;
		++i;
	}
	tab_a[0] = tab_b[0];
	i = 0;
	while(i < len_b)
	{
		tab_b[i] = tab_b[i + 1];
		++i;
	}
	write(1, "pa\n", 3);
}

void	pb(int *tab_a, int *tab_b, int len_a, int len_b)
{
	int i;
	int keep;
	int tmp;

	i = 0;
	keep = tab_b[0];
	if (len_a == 0)
		return ;
	while (i < len_b)
	{
		tmp = tab_b[i + 1];
		tab_b[i + 1] = keep;
		keep = tmp;
		++i;
	}
	tab_b[0] = tab_a[0];
	i = 0;
	while (i < len_a)	
	{
		tab_a[i] = tab_a[i + 1];
		++i;
	}
	write(1, "pb\n", 3);
}
