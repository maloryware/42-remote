/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:07:13 by micoutin          #+#    #+#             */
/*   Updated: 2025/04/25 02:57:58 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char	shift_by_index(unsigned int i, char c)
{
	return (c + i);
}

char	toggle_case(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);
	else
		return ft_tolower(c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2 == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = (*f)(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	*result;
	char	*input1 = "abcdef";
	char	*input2 = "";
	char	*input3 = "aBcDeF";

	result = ft_strmapi(input1, shift_by_index);
	printf("%s\n", result);
	free(result);

	result = ft_strmapi(input1, toggle_case);
	printf("%s\n", result);
	free(result);

	result = ft_strmapi(input2, shift_by_index);
        printf("%s\n", result);
        free(result);

	result = ft_strmapi(input2, toggle_case);
        printf("%s\n", result);
        free(result);

	result = ft_strmapi(input3, shift_by_index);
        printf("%s\n", result);
        free(result);

	result = ft_strmapi(input3, toggle_case);
        printf("%s\n", result);
        free(result);

	return (0);
}
*/
