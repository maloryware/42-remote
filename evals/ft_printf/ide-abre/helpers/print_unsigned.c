/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:57:16 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:53:16 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_unsigned(va_list args)
{
	int				counter;
	int				i;
	unsigned int	unum;
	char			buffer[20];

	i = 0;
	counter = 0;
	unum = va_arg(args, unsigned int);
	if (unum == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (unum > 0)
	{
		buffer[i] = "0123456789"[unum % 10];
		unum /= 10;
		counter++;
		i++;
	}
	while (i--)
		write(1, &buffer[i], 1);
	return (counter);
}
