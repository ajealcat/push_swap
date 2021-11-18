/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:27:49 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/18 14:50:17 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

int	main(int ac, char **av);
void sa(int *tab_a);
void sb(int *tab_b);
void pa(int *tab_a, int *tab_b, int *len_a, int *len_b);
void pb(int *tab_a, int *tab_b, int *len_a, int *len_b);
void ra(int *tab_a, int len_a);
void rb(int *tab_b, int len_b);
void rr(int *tab_a, int len_a, int *tab_b, int len_b);
void rra(int *tab_a, int len_a);
void rrb(int *tab_b, int len_b);
void rrr(int *tab_a, int len_a, int *tab_b, int len_b);
int *create_tmp(int *tab, int len);
int find_mediane(int *tab_a, int len_a);
int find_it(int *tab_a, int len_a, int it);
int find_it_hundred(int *tab_a, int len_a, int it);
int in_order(int *tab, int len);
int decrease(int *tab, int len);
int is_biggest(int *tab, int len);
int quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int search_biggest(int *tab, int len);
int search_smallest(int *tab, int len);
int quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int qs_three(int *tab, int *len);
int weird_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int weird_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int weird_sort_hundred_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int weird_sort_hundred_b(int *tab_a, int *tab_b, int *len_a, int *len_b);
int to_the_top(int *tab_b, int *len_b, int nb);
int is_closest(int i, int len);

#endif
