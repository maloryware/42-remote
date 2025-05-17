/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:39:08 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:52:04 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_hexadecimal(va_list args, int is_X_case)
{
	int				i;
	int				count;
	unsigned int	hex_num;
	char			buffer[20];

	i = 0;
	count = 0;
	hex_num = va_arg(args, int);
	if (hex_num == 0)
		return (write(1, "0", 1));
	while (hex_num > 0)
	{
		if (is_X_case)
			buffer[i++] = "0123456789ABCDEF"[hex_num % 16];
		else
			buffer[i++] = "0123456789abcdef"[hex_num % 16];
		hex_num /= 16;
		count++;
	}
	while (i--)
		write(1, &buffer[i], 1);
	return (count);
}
