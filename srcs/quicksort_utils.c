/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:09:52 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/23 10:33:50 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*create_tmp(int *tab, int len)
{
	int	*tab_tmp;
	int	i;

	i = 0;
	tab_tmp = malloc(sizeof(int) * len);
	if (tab_tmp == NULL)
		return (0);
	while (i < len)
	{
		tab_tmp[i] = tab[i];
		++i;
	}
	return (tab_tmp);
}

int	find_mediane(int *tab_a, int len_a)
{
	int	i;
	int	j;
	int	tmp;
	int	*tab_tmp;

	i = 0;
	tab_tmp = create_tmp(tab_a, len_a);
	while (i < len_a)
	{
		j = i + 1;
		while (j < len_a)
		{
			if (tab_tmp[i] > tab_tmp[j])
			{
				tmp = tab_tmp[i];
				tab_tmp[i] = tab_tmp[j];
				tab_tmp[j] = tmp;
			}
			++j;
		}
		++i;
	}
	tmp = tab_tmp[(len_a / 2) - 1 + (len_a % 2)];
	free(tab_tmp);
	return (tmp);
}

int	in_order(int *tab, int len)
{
	int	i;

	i = 0;
	if (len <= 1)
		return (1);
	while (i + 1 < len)
	{
		if (tab[i] < tab[i + 1])
			++i;
		else
			return (0);
	}
	return (1);
}

int	decrease(int *tab, int len)
{
	int	i;

	i = 0;
	if (len <= 1)
		return (1);
	while (i + 1 < len)
	{
		if (tab[i] > tab[i + 1])
			++i;
		else
			return (0);
	}
	return (1);
}
