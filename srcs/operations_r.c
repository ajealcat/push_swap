/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:05:08 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/23 10:21:40 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *tab_a, int len_a)
{
	int	i;
	int	keep;

	i = 0;
	keep = tab_a[i];
	while (i != len_a - 1)
	{
		tab_a[i] = tab_a[i + 1];
		++i;
	}
	if (i == len_a - 1)
		tab_a[i] = keep;
	write(1, "ra\n", 3);
}

void	rb(int *tab_b, int len_b)
{
	int	i;
	int	keep;

	i = 0;
	keep = tab_b[i];
	while (i != len_b - 1)
	{
		tab_b[i] = tab_b[i + 1];
		++i;
	}
	if (i == len_b - 1)
		tab_b[i] = keep;
	write(1, "rb\n", 3);
}

void	rr(int *tab_a, int len_a, int *tab_b, int len_b)
{
	int	i;
	int	keep_a;
	int	keep_b;

	i = 0;
	keep_a = tab_a[i];
	keep_b = tab_b[i];
	while (i != len_a - 1 && i != len_b - 1)
	{
		tab_a[i] = tab_a[i + 1];
		tab_b[i] = tab_b[i + 1];
		++i;
	}
	if (i == len_a - 1 && i == len_b - 1)
	{
		tab_a[i] = keep_a;
		tab_b[i] = keep_b;
	}
	write(1, "rr\n", 3);
}
