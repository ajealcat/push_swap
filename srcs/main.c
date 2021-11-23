/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:29:34 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/23 16:03:26 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(int ac, int *tab_a)
{
	int	i;
	int	comp_i;

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

int	ft_check_arg(int ac, char **av)
{
	int	i;
	int	j;

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

int	ft_fill_tab_a(int ac, char **av, int *tab_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i != ac - 1)
	{
		if (ft_strlen(av[i]) > 11)
			return (1);
		else if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
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

int	*ft_fill_tab_b(int ac, int *tab_b, int *tab_a)
{
	int	i;

	i = 0;
	tab_b = malloc(sizeof(int) * ac);
	if (tab_b == NULL)
	{
		free(tab_a);
		return (0);
	}
	while (ac != i)
	{
		tab_b[i] = '\0';
		++i;
	}
	return (tab_b);
}

#include <stdio.h> 

int	main(int ac, char **av)
{
	int	*tab_a;
	int	*tab_b;
	int	*len_a;
	int	*len_b;

	len_a = NULL;
	len_b = NULL;
	tab_b = NULL;
	len_a = security_first_len(len_a, ac - 1);
	len_b = security_first_len(len_b, 0);
	tab_a = malloc(sizeof(int) * ac);
	if (tab_a == NULL)
		return (0);
	tab_b = ft_fill_tab_b(ac, tab_b, tab_a);
	if (ac > 1)
	{
		if (error_manager(ac, av, tab_a) == 1)
		{
			free_all(tab_a, tab_b, len_a, len_b);
			return (0);
		}
	}
	while(ac != 0)
	{
		printf("tab_a main  = %d\n", *tab_a++);
		--ac;
	}
	just_do_it(tab_a, tab_b, len_a, len_b);
	free_all(tab_a, tab_b, len_a, len_b);
	return (0);
}
