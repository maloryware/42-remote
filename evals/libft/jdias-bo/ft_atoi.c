/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:44:58 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/09 19:10:51 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sinal;
	int	dest;

	i = 0;
	sinal = 1;
	dest = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = sinal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest = dest * 10 + str[i] - '0';
		i++;
	}
	return (dest * sinal);
}
/*
int	main()
{
	char 	*str = "  -1234dc3   ";
	
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
