/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 00:17:32 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/05 02:55:39 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*l = NULL;
	t_list	*node;
	int	node_index;
	
	node = ft_lstnew("Node1");
	ft_lstadd_front(&l, node);
	if (l != NULL)
		printf("%s\n", (char *)l->content);
	else
		printf("nope\n");
	node = ft_lstnew("Node2");
	ft_lstadd_front(&l, node);
	if (l != NULL)
	{
		printf("%s\n", (char *)l->content);
		if (l->next != NULL)
			printf("%s\n", (char *)l->next->content);
		else
			printf("nope\n");
	}
	else
		printf("nope\n");
	node = ft_lstnew("Node3");
	ft_lstadd_front(&l, node);
	t_list *temp = l;
	node_index = 1;
	while (temp)
	{
		printf("%d: %s\n", node_index, (char *)temp->content);
		temp = temp->next;
		node_index++;
	}

	while (l)
	{
		t_list *temp2 = l;
		l = l->next;
		free(temp2);
	}

	return (0);
}
*/
