/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 22:12:06 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/22 23:58:26 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_substr.c"

static size_t	ft_sub_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_rec_split(const char *s, char c, char **str)
{
	const char	*substr;

	while (*s && *s == c)
		s++;
	if (!*s)
		return (str);
	substr = s;
	while (*s && *s != c)
		s++;
	*str = ft_substr(substr, 0, s - substr);
	if (!*str)
		return (NULL);
	return (ft_rec_split(s, c, str + 1));
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	**clean;

	if (!s)
		return (NULL);
	str = calloc(ft_sub_count(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	clean = str;
	if (!ft_rec_split(s, c, str))
	{
		while (*clean)
			free(*clean++);
		return (free(str), NULL);
	}
	return (str);
}

int main()
{
	ft_split("Hello! My name is Mal! How are you? :)", ' ');
}
