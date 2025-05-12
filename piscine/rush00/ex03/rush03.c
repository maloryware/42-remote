/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:33:35 by Mal          #+#    #+#             */
/*   Updated: 2025/03/02 18:33:37 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_values[4];
int		g_x;
int		g_y;

void	ft_putchar(char x);

void	ft_draw(int curr_x, int curr_y)
{
	char	locs[4];

	locs[0] = g_values[0];
	locs[1] = g_values[1];
	locs[2] = g_values[2];
	locs[3] = g_values[3];
	if (curr_y != 1 && curr_y != g_y)
	{
		locs[0] = g_values[1];
		locs[1] = g_values[3];
		locs[2] = locs[0];
	}
	if (curr_x == 1)
	{
		ft_putchar(locs[0]);
	}
	if (curr_x == g_x)
	{
		ft_putchar(locs[2]);
	}
	if (curr_x != 1 && curr_x != g_x)
	{
		ft_putchar(locs[1]);
	}
}

void	rush(int x, int y)
{
	int		curr_x;
	int		curr_y;

	g_x = x;
	g_y = y;
	g_values[0] = 'A';
	g_values[1] = 'B';
	g_values[2] = 'C';
	g_values[3] = 32;
	curr_y = 1;
	while (curr_y <= y)
	{
		curr_x = 0;
		while (++curr_x <= x)
		{
			ft_draw(curr_x, curr_y);
		}
		curr_y++;
		ft_putchar(*"\n");
	}
}
