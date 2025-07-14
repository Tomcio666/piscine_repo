/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 06:21:15 by tloin             #+#    #+#             */
/*   Updated: 2025/07/09 06:38:54 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int	count;
	int	i;
	
	i = -1;
	if (min >= max)
		return (NULL);
	count = max - min;
	arr = malloc(count * 4);
	while (min < max)
		arr[++i] = min++;
	return (arr);
}
