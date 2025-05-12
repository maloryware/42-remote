/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:52:34 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/18 15:12:53 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c_incr;
	size_t	c_find;

	c_incr = 0;
	if (little[c_incr] == '\0')
		return ((char *) big);
	while (big[c_incr] != '\0' && c_incr < len)
	{
		c_find = 0;
		while ((big[c_incr + c_find] == little[c_find])
			&& ((c_incr + c_find) < len)
			&& (little[c_find] != '\0'))
		{
			c_find++;
		}
		if (little[c_find] == '\0')
			return ((char *) &big[c_incr]);
		c_incr++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Acha uma palavra ou conjunto de carateres";
	const char	sub_str[] = " ";
	size_t	size = 3;

	printf("%s\n", ft_strnstr(str, sub_str, size));
	return (0);
}
*/
