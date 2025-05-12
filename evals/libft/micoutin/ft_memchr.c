/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 23:54:18 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/18 15:08:08 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	i = 0;
	str = (const unsigned char *) s;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const unsigned char	letters1[5] = {'a', 'A', 'c', 'T', 'e'};
	const unsigned char	str1[] = "coisas";
	size_t i = 0;
	
	printf("%s\n", (const unsigned char *) ft_memchr(letters1, 'c', 4));
	printf("%s\n", (const unsigned char *) ft_memchr(letters1, 'c', 2));
	printf("%s\n", (const unsigned char *) \
       	ft_memchr(letters1, 'c', sizeof(letters1)));
	printf("%s\n", (const unsigned char *) ft_memchr(str1, 's', 4));
	printf("%s\n", (const unsigned char *) \
	ft_memchr(str1, 'd', sizeof(str1)));
	return (0);
}
*/
