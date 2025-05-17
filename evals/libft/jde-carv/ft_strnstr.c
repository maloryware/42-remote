/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:16:03 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/20 15:13:43 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ltt_len;

	ltt_len = ft_strlen(little);
	if (!ltt_len)
		return ((char *)big);
	while (*big && ltt_len <= len--)
	{
		if (!ft_strncmp(big++, little, ltt_len))
			return ((char *)--big);
	}
	return (NULL);
}
