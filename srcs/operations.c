/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:34:05 by ajearuth          #+#    #+#             */
/*   Updated: 2021/09/28 11:28:42 by ajearuth         ###   ########.fr       */
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
/*
void	sb(int *tab_b)
{
	int keep;

	if (tab_b[0] && tab_b[1])
	{
		keep = tab_b[0];
		tab_b[0] = tab_b[1];
		tab_a[1] = keep;
		write(1, "sb\n" 3);
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

void	pa(int	*tab_a, int *tab_b)
{
	
}
*/
