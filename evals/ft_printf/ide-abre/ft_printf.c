/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:41:33 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:49:01 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	static	arg_type_selector(va_list args, char type)
{
	if (type == '%')
		return (write(1, "%", 1));
	else if (type == 'c')
		return (print_char(args));
	else if (type == 's')
		return (print_string(args));
	else if (type == 'i' || type == 'd')
		return (print_number(args));
	else if (type == 'X' || type == 'x' )
		return (print_hexadecimal(args, type == 'X'));
	else if (type == 'p')
		return (print_address(args));
	else if (type == 'u')
		return (print_unsigned(args));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0' && i < ft_strlen(format))
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			count += arg_type_selector(args, format[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
