/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:54:14 by mariacos          #+#    #+#             */
/*   Updated: 2025/05/03 17:14:56 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	int	len_s;

	if (!s)
	{
		return ;
	}
	len_s = ft_strlen(s);
	i = 0;
	while (i < len_s)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
