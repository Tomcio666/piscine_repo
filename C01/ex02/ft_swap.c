/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:27:29 by tloin             #+#    #+#             */
/*   Updated: 2025/07/14 13:16:03 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int a, b;
	a = 'x';
	b = 'y';


	write(1, "Przed\n", 6);
	write(1, &a, 1);
	write(1, &b, 1);
	ft_swap(&a, &b);
	write(1, "Po\n", 3);
	write(1, &a, 1);
	write(1, &b, 1);
	return (1);
}*/
