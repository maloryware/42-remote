/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:17:51 by Mal          #+#    #+#             */
/*   Updated: 2025/03/06 20:33:04 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_size;
	unsigned int	j;

	j = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[j])
	{
		dest[dest_size++] = src[j++];
	}
	dest[dest_size] = '\0';
	return (dest);
}
