/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:29:40 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/19 21:14:59 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	int	n1 = 42;
	int n2 = 43;
	
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew(&n1);
	t_list	*node2 = ft_lstnew(&n2);

	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	printf("Head content: %d\n", *(int *)head->content);
	printf("Next content: %d\n", *(int *)head->next->content);
}*/
