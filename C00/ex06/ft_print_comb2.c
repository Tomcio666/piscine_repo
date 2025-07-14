/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:04:48 by tloin             #+#    #+#             */
/*   Updated: 2025/06/30 12:13:43 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_print(char c)
{
	write(1, &c, 1);
}

void	double_digit(int n)
{
	my_print(n / 10 + '0');
	my_print(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	l;
	int	p;

	l = 0;
	p = 1;
	while (l < 99)
	{
		while (p < 100)
		{
			double_digit(l);
			my_print(' ');
			double_digit(p);
			if (l != 98)
			{
				my_print(',');
				my_print(' ');
			}
			p++;
		}
		l++;
		p = l + 1;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
