/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:14:44 by migusant          #+#    #+#             */
/*   Updated: 2025/05/20 13:58:10 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned long n, char format);
int	ft_putptr(unsigned long ptr);
int	ft_putnbr(unsigned int n, int is_signed);

#endif