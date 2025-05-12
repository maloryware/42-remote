/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 05:08:49 by Mal          #+#    #+#             */
/*   Updated: 2025/03/20 13:36:35 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	revout(char *str, int size)
{
	while (--size >= 0)
	{
		write(1, &str[size], 1);
	}
}

int	flag_invalid(char *str, int *nb)
{
	int	index;
	int	next;

	if (*nb < 0)
	{
		*nb = -*nb;
		write(1, "-", 1);
	}
	index = 0;
	while (str[index])
	{
		if (str[index] == '+' || str[index] == '-')
			return (1);
		next = index + 1;
		while (str[next])
		{
			if (str[index] == str[next])
				return (1);
			next++;
		}
		index++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		i;
	int		len;
	char	out[1024];

	len = 0;
	while (base[len])
		len++;
	if (len < 2 || flag_invalid(base, &nb))
		return ;
	i = 0;
	while (nb || (nb == 0 && i == 0))
	{
		out[i] = base[nb % len];
		nb /= len;
		i++;
	}
	revout(out, i);
}
