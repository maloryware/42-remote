/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:51:17 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/04 18:44:43 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + src_len);
}
/*
int main()
{
    char    str1[30] = "Ola, ";
    char    str2[] = "tudo bem?";
    size_t  size = sizeof(str1);

    size_t  result = ft_strlcat(str1, str2, size);
    printf("Buffer depois da concatenaçao: %s\n", str1);
    printf("Valor retornado: %zu\n", result);
    return (0);
}*/
