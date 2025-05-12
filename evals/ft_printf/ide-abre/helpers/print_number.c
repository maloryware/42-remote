/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:38:54 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:58:33 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_number(va_list args)
{
	int		num;
	long	unum;
	char	buffer[20];
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	num = va_arg(args, int);
	unum = (long)num;
	if (num == 0)
		return (write(1, "0", 1));
	if (num < 0)
	{
		counter = write(1, "-", 1);
		unum = -(long)num;
	}
	while (unum > 0)
	{
		buffer[i++] = "0123456789"[unum % 10];
		unum /= 10;
	}
	while (i--)
		counter += write(1, &buffer[i], 1);
	return (counter);
}
