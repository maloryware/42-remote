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
	int		mine;
	int		theirs;

	// final //
	title("ft_printf FULL");
	mine = ft_printf("\nTests (mine): \nInt - %021d\nChar - %-3c\nHex: %#.0x|%X", 128, '\200', 539, 539);
	lb();
	theirs = printf("\nTests (they): \nInt - %021d\nChar - %-3c\nHex: %#.0x|%X", 128, '\200', 539, 539);
	check(mine, theirs);
	printf("\n");
}
