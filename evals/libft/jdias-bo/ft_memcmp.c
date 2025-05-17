/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:22:58 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:11:42 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt1;
	unsigned char	*pt2;
	size_t			a;

	pt1 = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	a = 0;
	while (a < n)
	{
		if (pt1[a] != pt2[a])
			return (pt1[a] - pt2[a]);
		a++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = { 'A', 'B', 'C', 0 };
	char s2[] = { 'A', 'B', 'D', 0 };

	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 2));
	printf("ft_memcmp (libc): %d\n", ft_memcmp(s1, s2, 3));
	printf("memcmp: %d\n", memcmp(s1, s2, 3));
	printf("memcmp (libc): %d\n", memcmp(s1, s2, 3));
}*/
