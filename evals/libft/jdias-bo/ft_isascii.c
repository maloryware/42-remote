/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:51:02 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:11:02 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
	{
		return (0);
	}
}
/*
int	main()
{

	printf("%d - %d\n", ft_isascii('A'), isascii('A'));
	printf("%d - %d\n", ft_isascii(126), isascii(126));
	printf("%d - %d\n", ft_isascii('\x80'), isascii('\x80'));
	return (0);
}*/
