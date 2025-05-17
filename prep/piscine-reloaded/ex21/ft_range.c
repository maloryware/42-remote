/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:29:11 by Mal          #+#    #+#             */
/*   Updated: 2025/04/07 17:07:30 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*out;
	int		i;

	if (min >= max)
		return (0);
	out = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		out[i] = min;
		min++;
		i++;
	}
	return (out);
}
