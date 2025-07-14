/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:30:29 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 15:49:36 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 97 && str[c] <= 122))
			return (0);
		c++;
	}
	return (1);
}

// int main (void)
// {
// 	char str[] = "asjdlhalfhhlg";
// 	printf("%d\n", ft_str_is_lowercase(str));
// }