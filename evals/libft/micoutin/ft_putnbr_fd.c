/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 02:56:15 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/25 04:47:05 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	x;

	x = '0';
	if (n < 0 && n >= -2147483647)
	{
		n = n * -1;
		write(fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		x = x + n;
		write(fd, &x, 1);
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n > 9 && n <= 2147483647)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
}
/*
int	main(void)
{
	int	f;

	f = open("some_text.txt", O_RDWR);
	if (f > 0)
	{
		ft_putnbr_fd(-2147483648, f);
		write(f, "\n", 1);
	}
	else
		write(2, "file not found\n", 15);
}
*/
