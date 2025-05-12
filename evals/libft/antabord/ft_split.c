/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antabord <antabord@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-23 14:52:10 by antabord          #+#    #+#             */
/*   Updated: 2025-04-23 14:52:10 by antabord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char **arr_aloc)
{
	int	i;

	i = 0;
	while (arr_aloc[i])
	{
		free(arr_aloc[i]);
		i++;
	}
	free(arr_aloc);
}

static size_t	ft_count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static void	ft_str_fill(char **arr_aloc, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			arr_aloc[i] = malloc((len + 1) * sizeof(char));
			if (!arr_aloc[i])
			{
				ft_free_all(arr_aloc);
			}
			ft_strlcpy(arr_aloc[i], s - len, len + 1);
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	nwords;
	char	**arr_aloc;

	if (!s)
		return (NULL);
	nwords = ft_count_words(s, c);
	arr_aloc = malloc((nwords + 1) * sizeof(char *));
	if (!arr_aloc)
		return (NULL);
	ft_str_fill(arr_aloc, s, c);
	if (!arr_aloc)
		return (NULL);
	arr_aloc[nwords] = NULL;
	return (arr_aloc);
}
/* 
int	main(int ac, char *av[])
{
	int	i = 0;
	char **f = ft_split(av[1], av[2][0]);
	if (ac == 3)
	{
		while (f[i])
		{
			printf("%s\n", f[i]);
			i++;
		}
		free(f);
	}
	return (0);
} */