/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 04:50:54 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/26 04:08:08 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
/*
int	main(void)
{
	size_t	a = 4;
	size_t	b = sizeof (size_t);
	size_t	*y = (size_t *) ft_calloc(a, b);
	size_t	i;

	i = 0;
	while (i < a)
	{
		printf("%zu\n", y[i]);
		i++;
	}
	free(y);
	printf("%zu\n", sizeof (char));
	return (0);
}
*/
