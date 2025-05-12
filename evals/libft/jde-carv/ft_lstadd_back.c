/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:42:56 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:14:55 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
}
/*int	main()
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));
	if(!node1 || !node2 || !node3)
		return (1);
	node3->content = "Hello, world!";
	node1->next = node2;
	node2->next = NULL;
	ft_lstadd_back(&node1, node3);
	printf("%s", (char *)node2->next->content);
}*/
