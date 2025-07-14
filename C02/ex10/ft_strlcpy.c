/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 16:33:47 by tloin             #+#    #+#             */
/*   Updated: 2025/07/02 16:54:26 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;

	offset = 0;
	if (size > 0)
	{
		while (*(src + offset) != '\0')
		{
			if (offset == size)
			{
				offset--;
				break ;
			}
			*(dest + offset) = *(src + offset);
			offset++;
		}
	}
	*(dest + offset) = '\0';
	while (*(src + offset) != '\0')
	{
		offset++;
	}
	return (offset);
}
