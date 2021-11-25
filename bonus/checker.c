/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:28:28 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/25 18:03:38 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/push_swap.h"

static char	**tab_list(void)
{
	char	**tab;

	tab = (char **)malloc(12 * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[0] = "pb\n";
	tab[1] = "pa\n";
	tab[2] = "ss\n";
	tab[3] = "rr\n";
	tab[4] = "rrr\n";
	tab[5] = "sa\n";
	tab[6] = "sb\n";
	tab[7] = "ra\n";
	tab[8] = "rb\n";
	tab[9] = "rra\n";
	tab[10] = "rrb\n";
	tab[11] = NULL;
	return (tab);
}

static void	execute_operation(int index, t_stack tablen)
{
	if (index == 0)
		pb(tab_a, tab_b, len_a, len_b);
	else if (index == 1)
		pa(tab_a, tab_b, len_a, len_b);
	else if (index == 2)
		ss(tab_a, tab_b);
	else if (index == 3)
		rr(tab_a, *len_a, tab_b, *len_b);
	else if (index == 4)
		rrr(tab_a, *len_a, tab_b, *len_b);
	else if (index == 5)
		sa(tab_a);
	else if (index == 6)
		sb(tab_b);
	else if (index == 7)
		ra(tab_a, *len_a);
	else if (index == 8)
		rb(tab_b, *len_b);
	else if (index == 9)
		rra(tab_a, *len_a);
	else if (index == 10)
		rrb(tab_b, *len_b);
	else
		return ;
}

static int	opfinder(char **tab_list, char *op)
{
	int	i;

	i = 0;
	while (i < 12 && tab_list[i] != NULL)
	{
		if ((ft_strlen(tab_list[i]) - 1) == ft_strlen(op)
			&& ft_strncmp(tab_list[i], op, ft_strlen(tab_list[i]) - 1) == 0)
			return (i);
		++i;
	}
	return (-1);
}

static int	checker(int *tab_a, int *tab_b, t_stack tablen)
{
	char	**tab_list;
	char	*line;

	while (get_next_line(0, &line) > 0)
	{
		if (opfinder(tab_list, line) == -1)
		{
			ft_putstr_fd("Error\n", 2);
			free(tab_list);
			free(line);
			return (free_tabs(tab_a, tab_b));
		}
		execute_operation(opfinder(tab_list, line), tablen);
		free(line);
	}
	free(tab_list);
	if (line == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		return (free_tabs(tab_a, tab_b));
	}
	free(line);
	return (0);
}

int	main(int ac, char **av)
{
	int	*tab_a;
	int *tab_b;
	int *len_a;
	int *len_b;
	t_stack	tablen;

	len_a = NULL;
	len_b = NULL;
	tab_b = NULL;
	len_a = security_first_len(len_a, ac - 1);
	len_b = security_first_len(len_b, 0);
	if (ft_error(ac, av))
		return (0);
	tab_a = malloc(sizeof(int) * ac);
	if (tab_a == NULL)
		return (0);
	tab_a = fill_tab_a(ac, av, tab_a);
	tab_b = fill_tab_b(ac, tab_b, tab_a);
	tablen = init_struct(tab_a, tab_b, len_a, len_b);
	if (checker(tab_a, tab_b, tablen) == 0)
	{
		if ((in order(tab_a, *len_a) && (*len_b == 0))
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
		free_all(tab_a, tab_b, len_a, len_b);
	}
	return (0);
}
