/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:10:18 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/20 14:55:48 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_digit_counter(long nb)
{
	long	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_create_str(long i, char *str, long n)
{
	while (i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	digits;
	long	nb;

	nb = n;
	digits = ft_digit_counter(nb);
	str = ft_calloc(digits + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		*str = '-';
		ft_create_str(digits - 1, str + 1, -nb);
	}
	else
		ft_create_str(digits, str, nb);
	return (str);
}
