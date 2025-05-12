/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:25:47 by Mal          #+#    #+#             */
/*   Updated: 2025/03/17 17:36:13 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	itoh_2(unsigned int in, char *out)
{
	int		i;
	int		div;

	i = 2;
	div = in;
	while (i >= 0)
	{
		out[--i] = "0123456789abcdef"[div % 16];
		div /= 16;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[2];

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			itoh_2(str[i], hex);
			write(1, &hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/* int	main()
{
	int		i;
	char	arr[127];

	i = 1;
	while (i <= 127)
	{
		arr[i - 1] = (char) i;
		i++;
	}
	ft_putstr_non_printable(arr);
}
 */