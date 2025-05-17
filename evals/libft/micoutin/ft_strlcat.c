/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 05:29:29 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/28 10:52:50 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;

	i = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	while (size <= s_dst)
		return (size + s_src);
	while (src[i] != '\0' && (s_dst + i) < (size - 1))
	{
		dst[s_dst + i] = src[i];
		i++;
	}
	dst[s_dst + i] = '\0';
	return (s_dst + s_src);
}
/*
int	main(void)
{
	const char	source[] = "";
	char	destiny[] = "setenta ";
	size_t	length = 20;

	printf("%zu\n", ft_strlcat(destiny, source, length));
	printf("%s\n", destiny);
	return (0);
}
*/
