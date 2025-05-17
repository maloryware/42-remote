/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 02:59:41 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/05 04:36:25 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}
/*
int	main(void)
{
	int	size;

	t_list	*l = NULL;
	size = ft_lstsize(l);
	printf("%d\n", size);

	t_list	*node1 = ft_lstnew("Node1");
	l = node1;
	size = ft_lstsize(l);
	printf("%d\n", size);

	t_list	*node2 = ft_lstnew("Node2");
	t_list	*node3 = ft_lstnew("Node3");
	node1->next = node2;
	node2->next = node3;
	size = ft_lstsize(l);
	printf("%d\n", size);

	while (l)
	{
		t_list	*temp = l;
		l = l->next;
		free(temp);
	}

	return (0);
}
*/
