/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:07:22 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 16:33:03 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }