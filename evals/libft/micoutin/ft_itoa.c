/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:05:33 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/25 07:25:38 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	n_count(int num);

char	*ft_itoa(int n)
{
	char	*size;
	long	num;
	int		len;

	num = n;
	len = n_count(num);
	size = (char *) malloc(sizeof(char) * (len + 1));
	if (size == NULL)
		return (NULL);
	size[len] = '\0';
	if (num < 0)
	{
		size[0] = '-';
		num *= -1;
	}
	if (num == 0)
		size[0] = '0';
	while (num > 0)
	{
		size[--len] = ((num % 10) + 48);
		num /= 10;
	}
	return (size);
}

static	int	n_count(int num)
{
	int	c;

	c = 0;
	if (num < 0)
	{
		c++;
		num *= -1;
	}
	if (num == 0)
		c++;
	while (num != 0)
	{
		num /= 10;
		c++;
	}
	return (c);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/
