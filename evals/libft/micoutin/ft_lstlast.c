/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 04:38:53 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/05 05:29:54 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*l = NULL;
	t_list	*last_node;
	last_node = ft_lstlast(l);
	printf("%p\n", (void *)last_node);

	t_list  *node1 = ft_lstnew("Node1");
	t_list  *node2 = ft_lstnew("Node2");
	t_list  *node3 = ft_lstnew("Node3");
	l = node1;
	node1->next = node2;
	node2->next = node3;
	last_node = ft_lstlast(l);
	printf("%s\n", (char *)last_node->content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
