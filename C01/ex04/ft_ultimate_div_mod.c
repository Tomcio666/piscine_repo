/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 12:10:50 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 13:16:02 by tloin            ###   ########.fr       */
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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

/*int main(void)
{
	int a = 10, b = 4;

	a = 21;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	write(1, "div: ", 5);
	ft_putnbr(a);
	write(1, "mod: ", 5);
	ft_putnbr(b);
}*/
