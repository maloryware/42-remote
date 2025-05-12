/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 08:17:58 by Mal          #+#    #+#             */
/*   Updated: 2025/03/20 16:12:29 by Mal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	while (1)
	{
		i = nb;
		while (i > 1)
		{
			if (nb % i == 0 && nb != i)
				break ;
			i--;
		}
		if (i == 1 && nb > 1)
			break ;
		nb++;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(33));
}
*/