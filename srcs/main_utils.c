/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:29:22 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 17:00:48 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_all(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	free(tab_a);
	free(tab_b);
	free(len_a);
	free(len_b);
	return (0);
}

int	*security_first_len(int *len, int size)
{
	len = malloc(sizeof(int) * 1);
	if (len == NULL)
		return (0);
	*len = size;
	return (len);
}

int	error_manager(int ac, char **av, int *tab_a)
{
	if (ft_fill_tab_a(ac, av, tab_a) == 1 || ft_check_arg(ac, av) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (ft_check_double(ac, tab_a) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	return (0);
}

int	just_do_it(int *tab_a, int *tab_b, int *len_a, int *len_b)
{
	if (*len_a < 50)
		quick_sort_a(tab_a, tab_b, len_a, len_b);
	else if (*len_a > 50 && *len_a <= 100)
		weird_sort_hundred_a(tab_a, tab_b, len_a, len_b);
	else
		weird_sort_a(tab_a, tab_b, len_a, len_b);
	return (0);
}

int	free_tabs(int *tab_a, int *tab_b)
{
	free(tab_a);
	free(tab_b);
	return (0);
}
