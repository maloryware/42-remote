/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 02:51:15 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/18 15:15:34 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	x[] = "hi, hello!!!1111";
	char	y[] = {69, 'x', 'x', 'x'};
	size_t	i = 0;
	
	ft_bzero(x, 30);
	ft_bzero(y, 4);
	while (i < 30)
        {
		printf("%c\n", x[i]);
		i++;
        }
	i = 0;
	while (i < 4)
	{
		printf("%c\n", y[i]);
		i++;
	}
	return (0);
}
*/
