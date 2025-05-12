/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 05:59:56 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/05 07:14:31 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
}
/*
int	main(void)
{
	t_list	*l = NULL;
	t_list	*node;

	node = ft_lstnew("Node1");
	ft_lstadd_back(&l, node);
	while (l != NULL)
	{
		printf("%s\n", (char *)l->content);
		l = l->next;
	}
	printf("\n");
	
	node = ft_lstnew("Node2");
	ft_lstadd_back(&l, node);
	while (l != NULL)
	{
		printf("%s\n", (char *)l->content);
		l = l->next;
	}
	printf("\n");
	
	node = ft_lstnew("Node 3");
	ft_lstadd_back(&l, node);
	while (l != NULL)
	{
		printf("%s\n", (char *)l->content);
		l = l->next;
	}
	printf("\n");
	
	ft_lstadd_back(&l, NULL);
	while (l != NULL)
	{
		printf("%s\n", (char *)l->content);
		l = l->next;
	}
	printf("\n");

	while (l)
	{
		t_list *temp = l;
		l = l->next;
		free(temp);
	}

	return (0);
}
*/
