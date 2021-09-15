/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:37:12 by ajearuth          #+#    #+#             */
/*   Updated: 2021/08/30 14:03:39 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_spe(const char *str)
{
	const char	*p;

	p = str;
	while (*str)
		++str;
	return (str - p);
}

static int	ft_checkbase(const char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_fd(int nbr, const char *base, int fd)
{
	long	nb;

	nb = nbr;
	if (ft_checkbase(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = nb * (-1);
		}
		if (nb < ft_strlen_spe(base) && nb >= 0)
			ft_putchar_fd(base[nb], fd);
		else
		{
			ft_putnbr_base_fd(nb / ft_strlen(base), base, fd);
			ft_putnbr_base_fd(nb % ft_strlen(base), base, fd);
		}
	}
}
