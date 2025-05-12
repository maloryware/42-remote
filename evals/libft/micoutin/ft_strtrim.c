/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:00:31 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/03 14:44:19 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	trimmer(char const *ch_gr, char ch);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	int		i;
	char	*str;

	beg = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (trimmer(set, s1[beg]) == 1)
		beg++;
	if (s1[beg] == '\0')
		return (ft_strdup(""));
	while (trimmer(set, s1[end]) == 1)
		end--;
	str = (char *) malloc(sizeof(char) * ((end - beg) + 2));
	if (str == NULL)
		return (NULL);
	while (beg <= end)
		str[i++] = s1[beg++];
	str[i] = '\0';
	return (str);
}

static	int	trimmer(char const *ch_gr, char ch)
{
	int	i;

	i = 0;
	while (ch_gr[i])
	{
		if (ch_gr[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s = "54734745274209hello world 01986435760295961598165";
	char	arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	printf("%s\n", ft_strtrim(s, arr));
	return (0);
}
*/
