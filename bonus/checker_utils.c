/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:43:14 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 17:51:37 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

t_stack	init_struct(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	t_stack	tablen;

	tablen.tab_a = tab_a;
	tablen.tab_b = tab_b;
	tablen.len_a = len_a;
	tablen.len_b = len_b;
	return (tablen);
}
