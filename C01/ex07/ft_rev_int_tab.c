/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:32:54 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 14:52:08 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*int main(void)
{
	int tab[] = {48, 49, 50, 51, 52, 53};
    int size = 6;
	int i = 0;

	while (i < size)
	{
		write(1, &tab[i], 1);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
    ft_rev_int_tab(tab, size);
    while (i < size)
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
    return 0;
}*/