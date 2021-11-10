/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:04:44 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/10 11:25:12 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *tab_a, int len_a)
{
	int i;
	int keep;

	i = 0;
	keep = tab_a[len_a - 1];
	while(i != len_a - 1)
	{
		tab_a[len_a - 1] = tab_a[len_a - 2];
		--len_a;
	}
	if(i == len_a - 1)
		tab_a[i] = keep;
	write(1, "rra\n", 4);
}

void	rrb(int *tab_b, int len_b)
{
	int i;
	int keep;

	i = 0;
	keep = tab_b[len_b - 1];
	while(i != len_b - 1)
	{
		tab_b[len_b - 1] = tab_b[len_b - 2];
		--len_b;
	}
	if(i == len_b - 1)
		tab_b[i] = keep;
	write(1, "rrb\n", 4);
}

void	rrr(int *tab_a, int len_a, int *tab_b, int len_b)
{
	int i;
	int keep_a;
	int keep_b;

	i = 0;
	keep_a = tab_a[len_a - 1];
	keep_b = tab_b[len_b - 1];
	while(i != len_a - 1 && i != len_b - 1)
	{
		tab_a[len_a - 1] = tab_a[len_a - 2];
		tab_b[len_b - 1] = tab_b[len_b - 2];
		--len_a;
		--len_b;
	}
	if(i == len_a - 1 && i == len_b - 1)
	{
		tab_a[i] = keep_a;
		tab_b[i] = keep_b;
	}
	write(1, "rrr\n", 4);
}
