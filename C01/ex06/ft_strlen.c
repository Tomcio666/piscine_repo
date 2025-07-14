/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:27:00 by tloin             #+#    #+#             */
/*   Updated: 2025/07/01 13:31:36 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
		write(1, "-", 1);
	if (nb / 10 != 0)
		ft_putnbr((nb / 10) * ((nb > 0) - (nb < 0)));
	c = '0' + (nb % 10) * ((nb > 0) - (nb < 0));
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char *str = "kurczak";
	int length;
	
	length = ft_strlen(str);
	ft_putnbr(length);
	write(1, "\n", 1);

}*/