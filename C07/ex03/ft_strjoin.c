/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:01:20 by tloin             #+#    #+#             */
/*   Updated: 2025/07/10 15:02:21 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += str_len(strs[i]);
		if (i < size - 1)
			len += str_len(sep);
		i++;
	}
	return (len);
}

char	*copy_str(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	char	*ptr;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (!res)
			return (NULL);
		return (res[0] = '\0', res);
	}
	res = (char *)malloc(sizeof(char) * (total_len(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	ptr = res;
	i = 0;
	while (i < size)
	{
		ptr = copy_str(ptr, strs[i]);
		if (i < size - 1)
			ptr = copy_str(ptr, sep);
		i++;
	}
	*ptr = '\0';
	return (res);
}
