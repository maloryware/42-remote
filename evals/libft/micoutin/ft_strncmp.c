/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:09:19 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/30 00:11:55 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if ((unsigned char) s1[c] != (unsigned char) s2[c]
			|| (unsigned char) s1[c] == '\0')
			return ((unsigned char) s1[c] - (unsigned char) s2[c]);
		c++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*x = "tou so a testar";
	char	*y = "tou so testando";

	printf("%d\n", ft_strncmp(x, y, 8));
	return (0);
}
*/
