/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davpache <davpache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:41:09 by mariacos          #+#    #+#             */
/*   Updated: 2025/05/05 23:25:23 by davpache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len_s;

	if (!s)
	{
		return ;
	}
	i = 0;
	len_s = ft_strlen(s);
	while (i < len_s)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
