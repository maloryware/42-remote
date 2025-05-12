/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 20:10:30 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:12:32 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	const char	*str = "1234554321";
	const char	*str1 = "Hello";
	const char	*str2 = "Eu quero isso";

	printf("O tamanho da string e: %zu\n", ft_strlen(str));
	printf("O tamanho da string e: %zu\n", ft_strlen(str1));
	printf("O tamanho da string e: %zu\n", ft_strlen(str2));
	return (0);
}*/
