/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:18:00 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/03 14:04:06 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		d;
	char	ch;

	d = ft_strlen(s) - 1;
	ch = (char) c;
	if (ch == '\0')
		return ((char *) &s[ft_strlen(s)]);
	while (d >= 0)
	{
		if (s[d] == ch)
			return ((char *) &s[d]);
		d--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "o rato roeu a rolha...";
	printf("%s\n", ft_strrchr(str, 'r'));
	return (0);
}
*/
