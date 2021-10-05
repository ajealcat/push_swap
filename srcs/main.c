/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:29:34 by ajearuth          #+#    #+#             */
/*   Updated: 2021/10/05 19:16:35 by ajearuth         ###   ########.fr       */
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
		if (tab_a[i] == tab_a[comp_i] && comp_i < ac - 1)
			return (1);
		++i;
	}
	return (0);
}

int		ft_check_arg(int ac, char **av)
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
	return (0);
}

int		ft_fill_tab_a(int ac, char **av, int *tab_a)
{
	int i;
	int j;
	
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

int		*ft_fill_tab_b(int ac, int *tab_b)
{
	int i;

	i = 0; 
	while (ac != i)
	{
		tab_b[i] = '\0';
		++i;
	}
	return (tab_b);
}

int		main(int ac, char **av)
{
	int *tab_a;
	int *tab_b;
//	int i;
	int j;

//	i = 1;
	j = 0;
	tab_a = malloc(sizeof(int) * (ac - 1));
	if (tab_a == NULL)
		return (0);
	tab_b = malloc(sizeof(int) * (ac - 1));
	if (tab_b == NULL)
		return (0);
	tab_b = ft_fill_tab_b(ac, tab_b);
	if (ac > 1)
	{
		if (ft_fill_tab_a(ac, av, tab_a) == 1 || ft_check_arg(ac, av) == 1)
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
	pb(tab_a, tab_b);
	pb(tab_a, tab_b);
	pb(tab_a, tab_b);
	pb(tab_a, tab_b);
	sb(tab_b);
	pa(tab_a, tab_b);
	pa(tab_a, tab_b);
	pa(tab_a, tab_b);
	pa(tab_a, tab_b);
	j = 0;
	while (j < ac - 1)
	{
		printf("tab a = %d\n", tab_a[j]);
		++j;
	}
	j = 0;
	while (j < ac - 1)
	{
		printf("tab b = %d\n", tab_b[j]);
		++j;
	}
	return (0);
}
