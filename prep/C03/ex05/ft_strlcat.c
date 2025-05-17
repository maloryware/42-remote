/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:49:36 by Mal          #+#    #+#             */
/*   Updated: 2025/03/10 15:24:48 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	j;

	j = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[j] && j < size)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	while (dest[j + dest_len])
	{
		dest[j + dest_len] = '\0';
		j++;
	}
	return (dest);
}
