/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:29:22 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/19 15:33:05 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_all(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	free(tab_a);
	free(tab_b);
	free(len_a);
	free(len_b);
	return(0);
}
