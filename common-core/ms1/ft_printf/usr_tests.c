/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usr_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/05/21 15:52:04 by Mal              ###   ########.fr       */
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
#include "ft_printf.c" */

int main()
{
	// something something main very muito fixe - vinny aka idfk shrug || skibidy sigma
	char *var = "There was a time I used to scratch my nuts and it didn't bleed";
	int vini_gostoso = 0;

	printf("testing fucking -");
	printf("\n\n%s!!!\n", var);
	ft_printf("\n\n%s!!!\n", var);

	printf("\ntesting fucking +\n\n");
	printf("%+d\n\n", vini_gostoso);
	ft_printf("%+d\n\n", vini_gostoso);

	printf("\ntesting fucking ' '+\n\n");
	printf("% .3d\n\n", vini_gostoso);
	ft_printf("% .3d\n\n", vini_gostoso);

	unsigned int	hashitagui = 3e8;
	printf("/nTestinf the nakye west #\n");
	printf("%#x\n\n", hashitagui);
	ft_printf("%#x\n\n", hashitagui);

	printf("Obrigado vini por me ajudar tenho muita dificuldade :D <3 nya~");
}

