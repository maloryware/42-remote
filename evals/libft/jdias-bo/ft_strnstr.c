/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:07:39 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/10 16:49:23 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	a;
	size_t	b;

	if (*needle == '\0')
		return ((char *)haystack);
	a = 0;
	while (a < n && haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < n)
		{
			b++;
			if (needle[b] == '\0')
				return ((char *)(haystack + a));
		}
		a++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[] = "Hello, world!";
	char needle[] = "world";
	int	a = 12;

	char *result = ft_strnstr(haystack, needle, a);
	if (result != NULL)
	{
			printf("Encontrado: %s\n", result);
	}
	else {
		printf("Não encontrado!\n");
	}

	result = ft_strnstr(haystack, needle, a);
	if (result != NULL)
	{
		printf("Encontrado: %s\n", result);
	}
	else {
		printf("Não encontrado!\n");
	}
	return 0;
}*/
