/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 00:16:50 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/18 15:03:42 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}
/*
int	main(void)
{
	char	*words = "quatrocentos e noventa";
	char	*n = "";
	printf("%zu\n", ft_strlen(words));
	printf("%zu\n", ft_strlen(n));
	return(0);
}
*/
