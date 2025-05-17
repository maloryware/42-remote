/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:46:15 by Mal          #+#    #+#             */
/*   Updated: 2025/05/10 22:46:16 by Mal              ###   ########.fr       */
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

static void	title(char *title)
{
	printf("\n\n------------------\n");
	printf("Testing %s:", title);
	printf("\n------------------\n");
}

static void	lb(void)
{
	printf("|EOL\n");
}

static void check(int mine, int theirs)
{
	printf("|EOL\n\nmine: %d, theirs: %d", mine, theirs);
}

int	main()
{
	int		mine;
	int		theirs;

	void *ptr = malloc(3);
	// final //
	title("ft_printf FULL");
	mine = ft_printf("\nTests (mine): \nInt - %021d\nChar - %-3c\nHex: %#.0x|%X\nPointer: %p\nString: %s\nUnsigned: %u",
		128, '\200', 539, 539, ptr, "a string!", 429496729);
	lb();
	theirs = printf("\nTests (they): \nInt - %021d\nChar - %-3c\nHex: %#.0x|%X\nPointer: %p\nString: %s\nUnsigned: %u",
		128, '\200', 539, 539, ptr, "a string!", 429496729);
	check(mine, theirs);
	printf("\n");
}
