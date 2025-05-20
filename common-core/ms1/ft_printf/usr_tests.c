/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usr_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/05/20 11:02:08 by Mal              ###   ########.fr       */
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

int main()
{
	int mine;
	int theirs;
	// Paste user-made tests here!
	title("ft_printf FULL");
	mine = ft_printf("Your input here\n");
	lb();
	theirs = printf("Your input here\n");
	check(mine, theirs);
	printf("\n");
}
