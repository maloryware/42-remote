/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:39:22 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:52:14 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_address(va_list args)
{
	int			count;
	int			i;
	size_t		adr;
	char		buffer[20];

	i = 0;
	count = 0;
	adr = va_arg(args, size_t);
	if (adr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	while (adr > 0)
	{
		buffer[i++] = "0123456789abcdef"[adr % 16];
		adr /= 16;
		count++;
	}
	while (i--)
		write(1, &buffer[i], 1);
	return (count + 2);
}
