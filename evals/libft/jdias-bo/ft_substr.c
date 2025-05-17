/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-bo <jdias-bo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:51:17 by jdias-bo          #+#    #+#             */
/*   Updated: 2025/05/04 18:44:43 by jdias-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	slen;
	char			*sub;

	i = 0;
	slen = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = (char *) malloc (len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
/*
int main ()
{
    const char *str = NULL;
    int start = 7;
    int length = 5;

    char *result = ft_substr(str, start, length);

    if (result != NULL)
    {
        printf("Substring: %s\n", result);
        free(result);
    }
    else
        printf("Erro na substring.\n")
    return (0);
}*/
