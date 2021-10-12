/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:27:49 by ajearuth          #+#    #+#             */
/*   Updated: 2021/10/12 13:15:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

int	main(int ac, char **av);
void sa(int *tab_a);
void sb(int *tab_b);
void pa(int *tab_a, int *tab_b, int len_a, int len_b);
void pb(int *tab_a, int *tab_b, int len_a, int len_b);
void ra(int *tab_a, int len_a);
void rb(int *tab_b, int len_b);
void rr(int *tab_a, int len_a, int *tab_b, int len_b);
void rra(int *tab_a, int len_a);
void rrr(int *tab_a, int len_a, int *tab_b, int len_b);

#endif
