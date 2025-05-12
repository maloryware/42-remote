/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:56:08 by Mal          #+#    #+#             */
/*   Updated: 2025/03/20 17:18:00 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	count_minus(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int	ft_endpos(char *str, int start)
{
	while (str[start])
	{
		if (start == 9999)
			return (0);
		if (str[start] < '0' || str[start] > '9')
		{
			return (start);
		}
		start++;
	}
	return (start);
}

int	ft_startpos(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (i);
		}
		else
		{
			if (str[i] != ' ' && str[i] != '+' && str[i] != '-'
				&& !(str[i] >= 9 && str[i] <= 13))
				return (9999);
		}
		i++;
	}
	return (i);
}

int	epow(int in, int exp)
{
	int	e;

	e = 1;
	while (--exp > 0)
	{
		e = e * 10;
	}
	return (in * e);
}

int	ft_atoi(char *str)
{
	int		curr;
	int		end;
	int		out;
	int		tmp;

	curr = ft_startpos(str);
	end = ft_endpos(str, curr);
	if (end < curr)
		return (0);
	out = 0;
	while (curr < end)
	{
		tmp = (int) str[curr] - 48;
		out += epow(tmp, (end - curr));
		curr++;
	}
	if (count_minus(str) % 2 != 0)
		out = -out;
	return (out);
}
