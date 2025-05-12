/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:49:28 by Mal          #+#    #+#             */
/*   Updated: 2025/05/10 21:19:02 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"

static char	*get_case(char hcase)
{
	if (hcase == 'x')
		return (HEX_LOWER);
	if (hcase == 'X')
		return (HEX_UPPER);
	return (NULL);
}

static char	*get_padding_case(char hcase)
{
	if (hcase == 'x')
		return ("0x");
	if (hcase == 'X')
		return ("0X");
	return (NULL);
}

static char	*reverse_hex(char *hex, int len)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(len);
	while (len-- >= 0)
		out[len] = hex[i++];
	return (out);
}

static char	*ft_atoh(int hex, const char *set)
{
	char	*out;
	int		i;
	int		hex_tmp;

	hex_tmp = hex;
	i = 0;
	while (hex_tmp)
	{
		hex_tmp /= 16;
		i++;
	}
	out = malloc(i);
	i = 0;
	while (hex)
	{
		out[i] = set[hex % 16];
		i++;
		hex /= 16;
	}
	return (reverse_hex(out, i));
}

int	print_hex(unsigned int hex, char hcase, t_flags *f)
{
	int			len;
	char		*out;
	const char	*set;

	len = 0;
	set = get_case(hcase);
	if (f->pad_0x)
		write(1, get_padding_case(hcase), 2);
	if (f->pad_0x)
		len = 2;
	out = ft_atoh(hex, set);
	ft_putstr_fd(out, ft_strlen(out));
	free(out);
	return (len);
}
