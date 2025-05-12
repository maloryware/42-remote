/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:14:56 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/20 15:10:59 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*iter;

	iter = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*iter++ = *(unsigned char *)src++;
	return (dest);
}
