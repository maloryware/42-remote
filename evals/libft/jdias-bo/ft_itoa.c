/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 02:28:01 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/05 20:54:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = (number % 10) + 48;
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(long nb, int *sign)
{
	long int	len;

	len = 0;
	if (nb <= 0)
	{
		len = 1;
		nb = nb * -1;
		*sign = -1;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			sign;
	long int	len;
	long		nb;

	nb = (long)n;
	sign = 1;
	len = ft_len(nb, &sign);
	s = malloc (len + 1);
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (nb == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (nb < 0)
	{
		nb = -nb;
		s[0] = '-';
	}
	s = ft_char (s, nb, len);
	return (s);
}
/*
int main()
{
    printf("%s\n", ft_itoa(0));             // "0"
    printf("%s\n", ft_itoa(1234));          // "1234"
    printf("%s\n", ft_itoa(-42));           // "-42"
    printf("%s\n", ft_itoa(-2147483648));   // "-2147483648"

}*/
