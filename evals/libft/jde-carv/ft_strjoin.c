/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:48:18 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/22 23:43:59 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	full_size;

	if (!s1 || !s2)
		return (NULL);
	full_size = ft_strlen(s1) + ft_strlen(s2);
	str = calloc(full_size + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, full_size);
	ft_strlcat(str, s2, full_size + 1);
	return (str);
}
