/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 03:37:15 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/06 05:09:29 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	print_char(unsigned int i, char *c)
{
        printf("%c", *c);
}

void	to_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
        {
                *c = 'A';
        }
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "ai esta...";

	ft_striteri(str, print_char);
	printf("\n");
	ft_striteri(str, to_upper);
	ft_striteri(str, print_char);
	return(0);
}
*/
