/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:24:58 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:13:01 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int	main()
{
	char	c = 'a';
	char	c1 = 'c';
	char	c2 = 'b';
	
	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(c1));
	printf("%c\n", ft_toupper(c2));
	return (0);
}*/
