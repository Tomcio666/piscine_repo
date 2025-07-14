/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:01:58 by tloin             #+#    #+#             */
/*   Updated: 2025/07/08 22:57:47 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	convert_atoi(int min_c, int i, char *arr)
{
	int	num;

	num = 0;
	while (arr[i])
	{
		if (!(arr[i] == '\0'))
			break ;
		i++;
	}
	while (arr[i])
	{
		if (arr[i] >= '0' && arr[i] <= '9')
			num = num * 10 + (arr[i] - 48);
		else
			break ;
		i++;
	}
	if (min_c % 2 == 1 && num != 0)
		num = -num;
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	min_c;

	i = 0;
	min_c = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == '-')
			min_c++;
		else if (str[i] >= '0' && str[i] <= '9')
			return (convert_atoi(min_c, i, str));
		else if (str[i] != '+')
			break ;
		i++;
	}
	return (0);
}
