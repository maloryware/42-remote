/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:37:08 by Mal          #+#    #+#             */
/*   Updated: 2025/03/04 20:43:52 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		curr;
	int		target;

	curr = 0;
	target = size - 1;
	while (curr < target)
	{
		tab[curr] = tab[curr] ^ tab[target];
		tab[target] = tab[curr] ^ tab[target];
		tab[curr] = tab[curr] ^ tab[target];
		curr++;
		target--;
	}
}
