/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:47:29 by Mal          #+#    #+#             */
/*   Updated: 2025/05/10 21:25:46 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

int	print_uint(unsigned int uint, t_flags *flags)
{
	char	*out;
	int		len;

	out = ft_itoa(uint);
	len = ft_strlen(out);
	len = handle_padding(flags, len, PAD_LEFT);
	write(1, out, ft_strlen(out));
	len = handle_padding(flags, len, PAD_RIGHT);
	free(out);
	return (len);
}
