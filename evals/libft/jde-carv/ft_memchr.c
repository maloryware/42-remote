/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:05:59 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/17 17:10:49 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	character;
	size_t			i;

	character = (unsigned char) c;
	string = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		if (string[i] == character)
			return (&string[i]);
		i++;
		n--;
	}
	return (NULL);
}
