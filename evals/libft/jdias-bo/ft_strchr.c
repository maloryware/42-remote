/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:57:16 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:14 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	var_c;

	var_c = (unsigned char)c;
	while (*s)
	{
		if (*s == var_c)
			return ((char *)s);
		s++;
	}
	if (var_c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	char	s1[] = "Estou aqui!";
	char	c = 'a';
	char	*resultado;

	resultado = ft_strchr(s1, c);
	if (resultado != NULL)
		printf("Caractere '%c' encontrado na posicao %ld\n", c, resultado - s1);
		printf("Caractere '%c' nao encontrado.\n", c);
	return (0);
}*/
