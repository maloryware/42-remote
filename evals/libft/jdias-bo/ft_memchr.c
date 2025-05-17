/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:57:22 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/10 17:14:04 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;
	size_t			a;

	a = 0;
	us = (unsigned char *)s;
	uc = c;
	while (a < n)
	{
		if (us[a] == uc)
			return (&us[a]);
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[15] = "12345678911234";
	char	c = '8';

	printf("%s\n", str);
	printf("%c\n", c);
	printf("%s\n", ft_memchr(str, c, 15));
	return (0);
}*/
