/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 02:09:32 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/05 22:28:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verificador(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && verificador(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && verificador(s1[end - 1], set))
		end--;
	string = malloc(end - start + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (start < end)
		string[i++] = s1[start++];
	string[i] = 0;
	return (string);
}

/*int	main(void)
{
	char *s1 = " Flamengo  ";
	char *set = " AFilgao ";
	printf("%s\n", ft_strtrim(s1, set));
}*/
