/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:29:34 by ajearuth          #+#    #+#             */
/*   Updated: 2021/09/23 15:40:46 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		ft_check_double(int ac, int tab_a[])
{
	int i;
	int comp_i;

	i = 0;
	while (i < ac - 1)
	{
		comp_i = i + 1;
		while (tab_a[i] != tab_a[comp_i] && comp_i < ac - 1)
			++comp_i;
		if (tab_a[i] == tab_a[comp_i])
			return (1);
		++i;
	}
	return (0);
}

int		ft_create_tab_a(int ac, char **av, int tab_a[])
{
	int i;
	int j;
	
	i = 1;
	while (i != ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' && ft_isalnum(av[i][j - 1]) == 0)
				++j;
			while (ft_isdigit(av[i][j]) == 0)
				return (1);
		++j;
		}
	++i;
	}
	i = 1;
	j = 0;
	while (i != ac)
	{
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
			return (1);
		else 
		{
			tab_a[j] = ft_atoi(av[i]);
			++i;
			++j;
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	int tab_a[ac - 1];
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		if (ft_create_tab_a(ac, av, tab_a) == 1)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		if (ft_check_double(ac, tab_a) == 1)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
	}
	j = 0;
	while (j < ac - 1)
	{
		printf("%d\n", tab_a[j]);
		++j;
	} 
	return (0);
}
