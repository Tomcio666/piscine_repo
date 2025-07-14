/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:05:00 by tloin             #+#    #+#             */
/*   Updated: 2025/07/14 12:37:09 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
		write(1, "-", 1);
	if (nb / 10 != 0)
		ft_putnbr((nb / 10) * ((nb > 0) - (nb < 0)));
	c = '0' + (nb % 10) * ((nb > 0) - (nb < 0));
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}

// int	main(int ac, char **av)
// {
// 	struct t_stock_str	*tab;
// 	ft_show_tab(tab);
// 	return (0);
// }
