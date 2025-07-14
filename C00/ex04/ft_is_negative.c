/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:18:15 by tloin             #+#    #+#             */
/*   Updated: 2025/06/30 12:14:54 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int in)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (in < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

//int	main(void)
//{
//	ft_is_negative(-10);
//	ft_is_negative(10);
//	ft_is_negative(0);
//}
