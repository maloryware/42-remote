/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:42:47 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:48 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	var_c;
	const char		*last;

	last = NULL;
	var_c = (unsigned char)c;
	while (*s)
	{
		if (*s == var_c)
			last = s;
		s++;
	}
	if (var_c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main()
{
	char	s1[] = "Banana";
	char	c = 'a';
	char	*resultado;

	resultado = ft_strrchr(s1, c);
	if (resultado != NULL)
		printf("Caractere '%c' encontrado na posicao %ld\n", c, resultado - s1);
	else
		printf("O caractere '%c' nao foi localizado\n", c);
	return (0);

}*/
