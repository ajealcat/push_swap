/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:15:23 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 14:21:43 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_med(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	int mediane;
	int i;

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
