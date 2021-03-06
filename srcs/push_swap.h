/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:27:49 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/29 14:49:47 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

int		main(int ac, char **av);
int		ft_check_double(int ac, int *tab_a);
int		ft_check_arg(int ac, char **av);
int		ft_fill_tab_a(int ac, char **av, int *tab_a);
int		*ft_fill_tab_b(int ac, int *tab_b, int *tab_a);
int		free_all(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		free_tabs(int *tab_a, int *tab_b);
int		*security_first_len(int *len, int size);
int		error_manager(int ac, char **av, int *tab_a);
int		just_do_it(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		moove_biggest(int *tab_a, int *tab_b, int *len_a, int *len_b);
void	sa(int *tab_a);
void	sb(int *tab_b);
void	ss(int *tab_a, int *tab_b);
void	pa(int *tab_a, int *tab_b, int *len_a, int *len_b);
void	pb(int *tab_a, int *tab_b, int *len_a, int *len_b);
void	ra(int *tab_a, int len_a);
void	rb(int *tab_b, int len_b);
void	rr(int *tab_a, int len_a, int *tab_b, int len_b);
void	rra(int *tab_a, int len_a);
void	rrb(int *tab_b, int len_b);
void	rrr(int *tab_a, int len_a, int *tab_b, int len_b);
void	find_the_best_way(int *tab_a, int *tab_b, int *len_a, int *len_b);
void	ftbw_hundred(int *tab_a, int *tab_b, int *len_a, int *len_b);
void	moove_a(int count, int *tab_a, int *len_a);
int		*create_tmp(int *tab, int len);
int		find_mediane(int *tab_a, int len_a);
int		parse_med(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		find_it(int *tab_a, int len_a, int it);
int		find_it_hundred(int *tab_a, int len_a, int it);
int		in_order(int *tab, int len);
int		decrease(int *tab, int len);
int		is_biggest(int *tab, int len);
int		quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		search_biggest(int *tab, int len);
int		search_smallest(int *tab, int len);
int		quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		qs_three(int *tab, int *len);
int		weird_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		weird_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		weird_sort_hundred_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		weird_sort_hundred_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int		to_the_top(int *tab_b, int *len_b, int nb);
int		closest(int i, int len);

#endif
