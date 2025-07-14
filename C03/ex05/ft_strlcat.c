/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:44:34 by tloin             #+#    #+#             */
/*   Updated: 2025/07/08 22:33:06 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dsize;
	unsigned int	ssize;

	i = 0;
	dsize = 0;
	ssize = 0;
	while (dest[dsize] != '\0')
		dsize++;
	while (src[ssize] != '\0')
		ssize++;
	j = dsize;
	if (size <= dsize)
		return (ssize + size);
	while (src[i] && i < size - dsize - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dsize + ssize);
}
