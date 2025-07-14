/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 05:56:36 by tloin             #+#    #+#             */
/*   Updated: 2025/07/09 06:24:43 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *strdup;
	int	i;

	i = 0;
	while (src[i])
		i++;
	strdup = malloc(i + 1);
	i = -1;
	while (src[++i])
		strdup[i] = src[i];
	strdup[i] = '\0'; 
	return (strdup);
}
