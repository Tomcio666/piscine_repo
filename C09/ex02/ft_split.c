/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tloin <tloin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:48:19 by tloin             #+#    #+#             */
/*   Updated: 2025/07/14 17:22:20 by tloin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!is_sep(str[i], sep))
		{
			words++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*word_split(char *str, char *sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
		i++;
	word = (char *)malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		i;
	int		j;

	i = 0;
	j = 0;
	output = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
	while (output == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			output[j] = word_split(&str[i], charset);
			while (str[i] && !is_sep(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	output[j] = 0;
	return (output);
}
// int main ()
// {
// 	char	*str1 = "sad@klej#spadaj$sussy*afk.dislike";
// 	char 	*sep = "@#$*.";
// 	char **words = ft_split(str1, sep);
// 	int i = 0;

// 	printf("Bef: %s\nAft: \n", str1);
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// }
