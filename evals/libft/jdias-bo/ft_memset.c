/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:46:29 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/04 18:45:08 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
int	main()
{
	char	buffer[20];

	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[19] = '\0';
	printf("%s", buffer);
	return (0);
}*/
