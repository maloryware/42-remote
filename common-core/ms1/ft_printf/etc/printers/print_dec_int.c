/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        	  */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:44:08 by Mal          #+#    #+#             	  */
/*   Updated: 2025/05/10 21:58:48 by Mal         ###   ########.fr       	  */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_dec_int(int n, t_pdata *flags)
{
	char	*out;
	int		len;

	if (flags->has_precision)
		flags->padding_length = flags->precision;
	out = ft_itoa(n);
	len = ft_strlen(out);
	if (n >= 0 && (flags->force_sign || flags->space_for_sign))
		len++;
	len = handle_padding(flags, len, PAD_LEFT);
	if (n >= 0 && flags->space_for_sign)
		ft_putchar(' ');
	if (n >= 0 && flags->force_sign)
		ft_putchar('+');
	write(1, out, ft_strlen(out));
	len = handle_padding(flags, len, PAD_RIGHT);
	free(out);
	return (len);
}
