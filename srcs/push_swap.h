/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:27:49 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/05 18:07:19 by ajearuth         ###   ########.fr       */
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
void rrr(int *tab_a, int len_a, int *tab_b, int len_b);
int *create_tmp(int *tab_a, int len_a);
int find_mediane(int *tab_a, int len_a);
int in_order(int *tab, int len);
int quick_sort_a(int *tab_a, int *tab_b, int *len_a, int *len_b);
int	quick_sort_b(int *tab_a, int *tab_b, int *len_a, int *len_b);

#endif
