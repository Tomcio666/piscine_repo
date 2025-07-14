/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:55:19 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 15:49:43 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (!(str[c] >= 65 && str[c] <= 90))
			if (!(str[c] >= 97 && str[c] <= 122))
				return (0);
		c++;
	}
	return (1);
}

// int main (void)
// {
// 	char str[] = "asjdlhalfhhlg";
// 	printf("%d\n", ft_str_is_alpha(str));
// }