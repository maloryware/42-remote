/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:34:44 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/10 17:15:54 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptrsrc;
	size_t			i;

	ptr = dest;
	ptrsrc = src;
	if (dest > src)
	{
		i = 0;
		while (i < n)
		{
			ptr[n - 1 - i] = ptrsrc[n - 1 - i];
			i++;
		}
	}
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			ptr[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}

/*int main(void)
{
    char test1[20] = "abc";
    char test2[20] = "abcdef";

    // Teste 1: cópia simples, sem sobreposição
    printf("Teste 1 - Sem sobreposição:\n");
    ft_memmove(test1, test2, 6);
    memmove(test2 + 6, test2, 6);
    printf("ft_memmove: %s\n", test1);
    printf("memmove: %s\n\n", test1);
    return (0);
}*/
