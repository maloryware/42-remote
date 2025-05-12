/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 20:59:02 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 18:49:21 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
/*
int	main()
{
	int	i;
	char	buffer[10] = "123456789";

	ft_bzero(buffer, 4);
	printf("buffer apos ft_bzero %d \n", buffer);
	i = 0;
	while (i < 10)
	{
		printf("buffer[%d] = %d\n", i, buffer[i]);
		i++;
	}
	return (0);
}*/
