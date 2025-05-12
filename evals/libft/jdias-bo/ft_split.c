/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:37:54 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:09 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	word_in;

	count = 0;
	word_in = 0;
	while (*s)
	{
		if (*s != c && word_in == 0)
		{
			word_in = 1;
			count++;
		}
		else if (*s == c)
			word_in = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int end)
{
	char	*words;
	int		i;

	words = malloc ((end - start + 1) * sizeof(char));
	if (!words)
		return (NULL);
	i = 0;
	while (start < end)
	{
		words[i] = s[start];
		i++;
		start++;
	}
	words[i] = '\0';
	return (words);
}

static void	free_all(char **words, int n)
{
	while (n--)
		free (words[n]);
	free (words);
}

static int	fill_words(char **words, char *s, char c)
{
	int	i;
	int	start;
	int	word_i;

	i = 0;
	word_i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			words[word_i] = word_dup(s, start, i);
			if (!words[word_i])
			{
				return (free_all(words, word_i), 0);
			}
			word_i++;
		}
	}
	words[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = malloc ((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	if (!fill_words(words, (char *)s, c))
		return (NULL);
	return (words);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("  Hello   42  Lisboa ", ' ');
	if (!result)
	{
		printf("Erro: ft_split retornou NULL\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */
