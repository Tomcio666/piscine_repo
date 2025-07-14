/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:39:18 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 14:54:15 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	j;

	i = 1;
	while (i < size)
	{
		k = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > k)
		{
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1] = k;
		i++;
	}
}

/*int main()
{
	int tab[] = {52,50,51,53,49};
	int size = 5;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}*/