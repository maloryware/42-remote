/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:50:00 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/05 00:16:13 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	t_list	*node_str;
	t_list	*node_int;
	t_list	*node_null;
	int	*num;
	char	*str = "Hello, World!";
	num = (int *)malloc(sizeof(int));
	if (num == NULL)
		return (1);
	*num = 42;
	node_str = ft_lstnew(str);
	node_null = ft_lstnew(NULL);
	node_int = ft_lstnew(num);
	if (node_int == NULL)
	{
		free(num);
		return (1);
	}
	
	printf("%s\n", (char *) (*node_str).content);
	printf("%p\n", (void *)node_str->next);
	printf("%p\n", node_null->content);
        printf("%p\n", (void *)node_null->next);
	printf("%d\n", *(int *)node_int->content);
	printf("%p\n", (void *)node_int->next);
	
	free(node_str);
	free(node_null);
	free(node_int);
	free(num);

	return (0);
}
*/
