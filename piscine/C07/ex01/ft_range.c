/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:29:11 by Mal          #+#    #+#             */
/*   Updated: 2025/03/20 15:56:45 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*out;
	int		i;

	if (min >= max)
		return (0);
	out = (int *)malloc(max - min);
	i = 0;
	while (min < max)
	{
		out[i] = min;
		min++;
		i++;
	}
	return (out);
}
