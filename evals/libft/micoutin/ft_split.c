/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:03:53 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/26 04:48:00 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	counter(char const *str, char ch);
static	char	*word_split(char const *str, char ch);
static	void	*free_all(char **strs, int ind);

char	**ft_split(char const *s, char c)
{
	char	**arr_w;
	int		i_aw;
	int		i;

	i = 0;
	i_aw = 0;
	arr_w = ft_calloc((counter(s, c) + 1), sizeof(char *));
	if (arr_w == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr_w[i_aw] = word_split(&s[i], c);
			if (arr_w[i_aw] == NULL)
				return (free_all(arr_w, i_aw));
			while (s[i] != '\0' && s[i] != c)
				i++;
			i_aw++;
		}
		else
			i++;
	}
	arr_w[i_aw] = 0;
	return (arr_w);
}

static	int	counter(char const *str, char ch)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ch)
		{
			c++;
			while (str[i] != '\0' && str[i] != ch)
				i++;
		}
		else
			i++;
	}
	return (c);
}

static	char	*word_split(char const *str, char ch)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] != '\0' && str[i] != ch)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != ch)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	void	*free_all(char **strs, int ind)
{
	int	i;

	i = 0;
	while (i < ind)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}
/*
int	main(void)
{
	int	i;
	char	*str = "Real Madrid/AC Milan/Bayern Munich\
			/Liverpool/Barcelona/Ajax/Inter Milan\
			/Man United/Notts Forest/Benfica/Porto\
			/Juventus/Chelsea/Man City/Celtic/PSV\
			/Feyenoord/Crvena Zvezda/Aston Villa\
			/Dortmund/Marseille/Steaua Bucuresti\
			/Hamburg";
	char	splitter = '/';
	char	**the_list;
	
	i = 0;
	the_list = ft_split(str, splitter);
	if (the_list == NULL)
	{
		printf("Memory allocation error.\n");
		return (1);
	}
	while (the_list[i])
	{
		printf("%s\n", the_list[i]);
		free(the_list[i]);
		i++;
	}
	printf("%d\n", i);
	free(the_list);
	return (0);
}
*/
