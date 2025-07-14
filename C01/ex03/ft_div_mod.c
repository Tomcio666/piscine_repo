/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:55:59 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 12:13:47 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a,b;
	int div, mod;

	a = 21;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	write(1, "div: ", 5);
	ft_putnbr(div);
	write(1, "mod: ", 5);
	ft_putnbr(mod);
}*/