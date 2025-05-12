/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:52:26 by Mal          #+#    #+#             */
/*   Updated: 2025/04/07 13:53:41 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	curr;

	curr = 48;
	while (curr <= '9')
	{
		write(1, &curr, 1);
		curr++;
	}
}

/* int	main(void)
{
	ft_print_numbers();
}
 */