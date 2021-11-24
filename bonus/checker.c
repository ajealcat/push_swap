/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:28:28 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/24 22:05:22 by ajearuth         ###   ########.fr       */
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

static void	ft_execute_operation(int index, int *tab_a, int *tab_b)
{
	if (index == 0)
		p(b, a);
	else if (index == 1)
		p(a, b);
	else if (index == 2)
		double_s(a, b);
	else if (index == 3)
		double_r(a, b);
	else if (index == 4)
		double_rr(a, b);
	else if (index == 5)
		s(a);
	else if (index == 6)
		s(b);
	else if (index == 7)
		r(a);
	else if (index == 8)
		r(b);
	else if (index == 9)
		rr(a);
	else if (index == 10)
		rr(b);
	else
		return ;
}

static int	ft_opfinder(char **op_list, char *op)
{
	int	i;

	i = 0;
	while (i < 12 && op_list[i] != NULL)
	{
		if ((ft_strlen(op_list[i]) - 1) == ft_strlen(op)
			&& ft_strncmp(op_list[i], op, ft_strlen(op_list[i]) - 1) == 0)
			return (i);
		++i;
	}
	return (-1);
}

static int	ft_checker(int *tab_a, int *tab_b)
{
	char	**tab_list;
	char	*line;

	tab_list = tab_list();
	while (get_next_line(0, &line) > 0)
	{
		if (ft_opfinder(tab_list, line) == -1)
		{
			ft_putstr_fd("Error\n", 2);
			free(tab_list);
			free(line);
			return (42 * liberator(a, b));
		}
		ft_execute_operation(ft_opfinder(tab_list, line), a, b);
		free(line);
	}
	free(tab_list);
	if (line == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		return (42 * liberator(a, b));
	}
	free(line);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ft_error(ac, av))
		return (42);
	a = ft_init(av, ac - 1, 'c');
	if (a == NULL)
		return (42);
	b = ft_init(NULL, 0, 'd');
	if (b == NULL)
		return (42 * liberator(a, NULL));
	if (ft_checker(a, b) == 0)
	{
		if ((ft_is_sorted(a)) && (b->len == 0))
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
		liberator(a, b);
	}
	return (0);
}
