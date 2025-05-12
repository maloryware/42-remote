/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:54:38 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/26 06:10:58 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*copy1;
	const unsigned char	*copy2;
	size_t				c;

	copy1 = (const unsigned char *) s1;
	copy2 = (const unsigned char *) s2;
	c = 0;
	while (c < n)
	{
		if (copy1[c] != copy2[c])
			return (copy1[c] - copy2[c]);
		c++;
	}
	return (0);
}
/*
int	main(void)
{
	char	letters1[5] = {'a', 'A', 'c', 'T', 'e'};
	char    letters2[1] = {'a'};
	char	*str1 = "coisa";
	char	*str2 = "coisas";

	printf("%d\n", ft_memcmp(str1, str2, 6));
	printf("%d\n", ft_memcmp(letters1, letters2, sizeof (letters2)));
	return (0);
}
*/
