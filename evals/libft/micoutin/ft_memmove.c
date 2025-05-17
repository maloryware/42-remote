/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:35:06 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/26 05:29:38 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				c;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d < s)
	{
		c = 0;
		while (c < n)
		{
			d[c] = s[c];
			c++;
		}
	}
	else if (d > s)
	{
		c = n;
		while (c > 0)
		{
			c--;
			d[c] = s[c];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[];
	char	destiny[];
	size_t	n = 0;

	ft_memmove(destiny, source, 4);
	while (n <= 6)
	{
		printf("%c\n", destiny);
		n++;
	}
	return (0);
}
*/
