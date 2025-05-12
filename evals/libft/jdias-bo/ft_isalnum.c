/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:40:38 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:10:37 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{
	char	c = 'A';
	int	a = '1';
	char	b = '!';

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	return (0);
}*/
