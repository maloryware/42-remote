/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:29:32 by Mal          #+#    #+#             */
/*   Updated: 2025/03/05 15:34:48 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_values[4];
int		g_x;
int		g_y;

void	ft_putchar(char x);

void	ft_draw(int curr_x, int curr_y, char *values)
{
	if (curr_x == 1 || curr_x == g_x)
	{
		ft_putchar(values[0]);
	}
	else
	{
		ft_putchar(values[1]);
	}
}

void	ft_calc(int curr_x, int curr_y)
{
	char	locs[2];

	if (curr_y == 1 || curr_y == g_y)
	{
		locs[0] = g_values[0];
		locs[1] = g_values[1];
	}
	else
	{
		locs[0] = g_values[2];
		locs[1] = g_values[3];
	}
	ft_draw(curr_x, curr_y, locs);
}

void	rush(int x, int y)
{
	int		curr_x;
	int		curr_y;

	g_x = x;
	g_y = y;
	g_values[0] = 'o';
	g_values[1] = '-';
	g_values[2] = '|';
	g_values[3] = 32;
	curr_y = 1;
	while (curr_y <= y)
	{
		curr_x = 0;
		while (++curr_x <= x)
		{
			ft_calc(curr_x, curr_y);
		}
		curr_y++;
		ft_putchar(*"\n");
	}
}
