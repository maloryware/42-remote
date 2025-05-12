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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size >= ((size_t)-1) / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main (void)
{
    int     *arr = (int *)ft_calloc(5, sizeof(int));
	int     *arr2 = (int *)calloc(5, sizeof(int));
    int     i, j;

    i = 0;
    while(i < 5)
    {
        printf("%d\n", arr[i]);
        i++;
    }
	j = 0;
    while(j < 5)
    {
        printf("%d\n", arr2[j]);
        j++;
    }
    free(arr);
	free(arr2);
    return (0);
} */
