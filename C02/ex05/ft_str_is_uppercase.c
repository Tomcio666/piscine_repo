/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:33:57 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 14:36:08 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 65 && str[c] <= 90))
			return (0);
		c++;
	}
	return (1);
}

// int main (void)
// {
// 	char str[] = "HUSsdFHDFJK";
// 	printf("%d\n", ft_str_is_uppercase(str));
// }