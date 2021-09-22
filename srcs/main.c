/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:29:34 by ajearuth          #+#    #+#             */
/*   Updated: 2021/09/22 11:43:30 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int tab_a[ac - 1];
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (i != ac)
		{
			tab_a[j] = ft_atoi(av[i]);
			++i;
			++j;
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
