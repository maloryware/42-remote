/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:37:08 by Mal          #+#    #+#             */
/*   Updated: 2025/03/04 20:43:18 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		sorted;
	int		curr;
	int		tmp;

	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		curr = 0;
		while (curr < size - 1)
		{
			if (tab[curr] > tab[curr + 1])
			{
				tmp = tab[curr];
				tab[curr] = tab[curr + 1];
				tab[curr + 1] = tmp;
				sorted = 0;
			}
			curr++;
		}
	}
}
