/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:48:47 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/04 18:54:43 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nlong;
	int		i;
	char	c[10];

	nlong = n;
	if (nlong == 0)
		ft_putchar_fd('0', fd);
	i = 0;
	if (nlong < 0)
	{
		ft_putchar_fd('-', fd);
		nlong = nlong * -1;
	}
	while (nlong > 0)
	{
		c[i] = nlong % 10 + 48;
		nlong = nlong / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(c[i], fd);
		i--;
	}
}
/*
int main ()
{
    ft_putnbr_fd(12345, 1);
    ft_putnbr_fd(13333333, 1);
    return (0);
}*/
