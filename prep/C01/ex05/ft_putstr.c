/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:36:56 by Mal          #+#    #+#             */
/*   Updated: 2025/03/03 12:40:47 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i++], 1);
	}
}
