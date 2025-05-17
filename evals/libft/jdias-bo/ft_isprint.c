/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:51:17 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:11:11 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main()
{
	printf("%d - %d\n", ft_isprint(32), isprint(32));
	printf("%d - %d\n", ft_isprint('A'), isprint('A'));
	printf("%d - %d\n", ft_isprint('g'), isprint('g'));
	printf("%d - %d\n", ft_isprint('\t'), isprint('\t'));
	printf("%d - %d\n", ft_isprint('\n'), isprint('\n'));
	return (0);
}*/
