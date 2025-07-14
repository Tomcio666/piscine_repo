/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:37:08 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 14:39:11 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 33 && str[c] <= 126))
			return (0);
		c++;
	}
	return (1);
}

// int main (void)
// {
// 	char str[] = "HUSsdFHDFJK";
// 	printf("%d\n", ft_str_is_printable(str));
// }