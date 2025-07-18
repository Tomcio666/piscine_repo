/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:28:05 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 11:19:34 by tloin            ###   ########.fr       */
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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int	a;
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr9;

	a = 0;

	nbr1 = &a;
	nbr2 = &nbr1;  
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;  
	nbr6 = &nbr5;  
	nbr7 = &nbr6;  
	nbr8 = &nbr7;  
	nbr9 = &nbr8;  

	ft_ultimate_ft(nbr9);
	ft_putnbr(a);
	return (1);
}*/