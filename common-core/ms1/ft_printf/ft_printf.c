/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:49 by Mal          #+#    #+#             */
/*   Updated: 2025/05/10 22:36:24 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* #include "etc/stdlibs/mini_libft.c"
#include "etc/stdlibs/substr.c"
#include "etc/stdlibs/atoi.c"
#include "etc/stdlibs/itoa.c"
#include "etc/printers/print_char.c"
#include "etc/printers/print_dec_int.c"
#include "etc/printers/print_hex.c"
#include "etc/printers/print_pointer.c"
#include "etc/printers/print_string.c"
#include "etc/printers/print_uint.c"
#include "etc/format_delegator.c"
#include "etc/aux.c"
#include "main.c" */

t_flags	*fl_init(void)
{
	t_flags		*out;

	out = malloc(sizeof(t_flags));
	out->pad_0x = FALSE;
	out->zero_pad = FALSE;
	out->padding_side = PAD_LEFT;
	out->padding_length = 0;
	out->space_for_sign = FALSE;
	out->force_sign = FALSE;
	out->len = 0;
	return (out);
}

void	reset_flags(t_flags *data)
{
	data->pad_0x = FALSE;
	data->zero_pad = FALSE;
	data->padding_side = PAD_LEFT;
	data->padding_length = 0;
	data->space_for_sign = FALSE;
	data->force_sign = FALSE;
}

// TODO: see also: printf manpage 3

int	ft_printf(const char *format, ...)
{
	t_flags			*f;
	int				index;
	va_list			params;

	f = fl_init();
	index = 0;
	va_start(params, format);
	while (format[index])
	{
		if (format[index] == '%')
			index = format_delegator(index, params, format, f);
		else
		{
			write(1, &format[index], 1);
			f->len++;
		}
		reset_flags(f);
		index++;
	}
	return (f->len);
}
