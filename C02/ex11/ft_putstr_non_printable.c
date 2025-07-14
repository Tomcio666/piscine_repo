/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 19:12:32 by tloin             #+#    #+#             */
/*   Updated: 2025/07/07 12:58:42 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_print(char c)
{
	write(1, &c, 1);
}

void	hexadecimal(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	my_print(92);
	my_print(hex[c / 16]);
	my_print(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			hexadecimal(str[i]);
		else
			my_print(str[i]);
		i++;
	}
}

int main()
{
	char *str = "Coucou\ntu vas bien ?";
 	ft_putstr_non_printable(str);
}