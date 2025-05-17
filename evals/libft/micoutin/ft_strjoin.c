/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:01:23 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/24 02:25:58 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_t;
	size_t	t;
	int		i;
	int		i_t;

	i = 0;
	i_t = 0;
	t = ft_strlen(s1) + ft_strlen(s2);
	s_t = (char *) malloc(sizeof(char) * (t + 1));
	if (s_t == NULL)
		return (NULL);
	while (s1[i] != '\0')
		s_t[i_t++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		s_t[i_t++] = s2[i++];
	s_t[i_t] = '\0';
	return (s_t);
}
/*
int	main(void)
{
	char	*str1 = "Hello, ";
	char	*str2 = "World!";

	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
*/
