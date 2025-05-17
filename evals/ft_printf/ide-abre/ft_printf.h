/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <ide-abre@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:41:50 by ide-abre          #+#    #+#             */
/*   Updated: 2025/05/03 20:49:53 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H 

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_strlen(const char *s);
int	print_address(va_list args);
int	print_char(va_list args);
int	print_hexadecimal(va_list args, int is_X_case);
int	print_number(va_list args);
int	print_string(va_list args);
int	print_unsigned(va_list args);

#endif