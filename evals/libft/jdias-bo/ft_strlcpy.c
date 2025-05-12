/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:53:59 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:28 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (src[i] != '\0')
		i++;
	len = i;
	if (dstsize > 0)
	{
		j = 0;
		while (j < dstsize - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (len);
}
/*
int main(void)
{
    char src[] = "Olá, mundo!";
    char dest[20];
    size_t result;

    result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Destino: %s\n", dest);
    printf("Tamanho de src: %zu\n", result);

    // Testando com buffer menor que src
    char dest2[5];
    result = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Destino (buffer pequeno): %s\n", dest2);
    printf("Tamanho de src: %zu\n", result);

    return 0;
}*/
