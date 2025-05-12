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
	t_flags	*myflags;
	int		mine;
	int		theirs;

	myflags = fl_init();

	// print_char //
	title("print_char");
	myflags->zero_pad = TRUE;
	myflags->padding_side = PAD_RIGHT;
	myflags->padding_length = 8;


	mine = print_char('D', myflags);
	lb();
	theirs = printf("%-8c", 'D');

	check(mine, theirs);
	// print_dec_int //
	title("print_dec_int");
	myflags->zero_pad = TRUE;
	myflags->padding_side = PAD_LEFT;
	myflags->padding_length = 21;

	mine = print_dec_int(127, myflags);
	lb();
	theirs = printf("%021d", 127);
	check(mine, theirs);

	// final //
	title("ft_printf FULL");
	mine = ft_printf("Tests (mine): \nInt - %021d\nChar - %-3c\nHex: %#x|%X", 128, 'D', 539, 539);
	lb();
	theirs = printf("Tests (they): \nInt - %021d\nChar - %-3c\nHex: %#x|%X", 128, 'D', 539, 539);
	check(mine, theirs);
}
