/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 21:36:01 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:56 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int	main()
{
	char	c = 'A';
	char	c1 = 'B';
	char	c2 = 'C';
	
	printf("%c\n", ft_lower(c));
	printf("%c\n", ft_lower(c1));
	printf("%c\n", ft_lower(c2));
	return (0);
}*/
