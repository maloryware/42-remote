/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:44:18 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/29 23:26:57 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				c;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	c = 0;
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (dest);
}
/*
int     main(void)
{
        char    source[];
        char    destiny[];

        ft_memmove(destiny, source, sizeof(destiny));
        printf("%s\n", destiny);
        return (0);
}
*/
