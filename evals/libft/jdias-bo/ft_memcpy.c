/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:27:02 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/10 16:59:04 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *origem, size_t num)
{
	unsigned char	*d;
	unsigned char	*o;

	d = dest;
	o = (unsigned char *) origem;
	while (num--)
	{
		*d++ = *o++;
	}
	return (dest);
}

/*int	main()
{
	char	origem[] = "ola, mundo!";
	char	destino[50];

	ft_memcpy(destino, origem, 6);
	printf("O Destino sera: %s\n", destino);
	return (0);
}*/
