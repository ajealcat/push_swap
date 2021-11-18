/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weird_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:34:05 by ajearuth          #+#    #+#             */
/*   Updated: 2021/11/18 14:46:11 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_closest(int i, int len)
{
        if (len < i)
                return (len);
        return (i);
}

int to_the_top(int *tab_b, int *len_b, int nb)
{
        if(nb <= *len_b / 2)
        {
                while(nb)
                {
                        rb(tab_b, *len_b);
                        --nb;
                }
        }
        else if(nb > *len_b / 2)
        {
                nb = *len_b - nb;
                while(nb)
                {
                        rrb(tab_b, *len_b);
                        --nb;
                }
        }
        return(0);
}

int	find_it(int *tab_a, int len_a, int it)
{
        int i;
        int j;
        int tmp;
        int *tab_tmp;

        i = 0;
        tab_tmp = create_tmp(tab_a, len_a);
        while(i < len_a)
        {
                j = i + 1;
                while (j < len_a)
                {
                        if(tab_tmp[i] > tab_tmp[j])
                        {
                                tmp = tab_tmp[i];
                                tab_tmp[i] = tab_tmp[j];
                                tab_tmp[j] = tmp;
                        }
                        ++j;
                }
                ++i;
        }
        tmp = tab_tmp[len_a - (len_a * (8 - it) / 8)];
        free(tab_tmp);
        return(tmp);
}

int	find_it_hundred(int *tab_a, int len_a, int it)
{
        int i;
        int j;
        int tmp;
        int *tab_tmp;

        i = 0;
        tab_tmp = create_tmp(tab_a, len_a);
        while(i < len_a)
        {
                j = i + 1;
                while (j < len_a)
                {
                        if(tab_tmp[i] > tab_tmp[j])
                        {
                                tmp = tab_tmp[i];
                                tab_tmp[i] = tab_tmp[j];
                                tab_tmp[j] = tmp;
                        }
                        ++j;
                }
                ++i;
        }
        tmp = tab_tmp[len_a - (len_a * (3 - it) / 3)];
        free(tab_tmp);
        return(tmp);
}

