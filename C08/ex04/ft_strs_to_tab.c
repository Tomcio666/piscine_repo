/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:22:13 by tloin             #+#    #+#             */
/*   Updated: 2025/07/14 12:36:31 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
//#include <stdio.h>

// typedef struct s_stock_str
// {
// 	int size;
// 	char *str;
// 	char *copy;
// } t_stock_str;

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_dup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	if (src == NULL)
		return (NULL);
	dest = malloc(str_len(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = str_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = str_dup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
// int	main(int ac, char **av)
// {
// 	t_stock_str *tab;
// 	int i;

// 	i = 0;
// 	tab = ft_strs_to_tab(ac,av);
// 	while (i < ac)
// 	{
// 		printf("%s\n", tab[i].str);
// 		printf("%d\n", tab[i].size);
// 		printf("%s\n", tab[i].copy);
// 		printf("%s", "\n");
// 		i++;
// 	}
// 	return (0);
// }