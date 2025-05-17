/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:59:33 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:15:07 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
void	delthenodes(void *content)
{
	free (content);
}*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	*lst = NULL;
}
/*int main()
{
	t_list	*node1;
	t_list	*node2;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	if (!node1 || !node2)
		return (1);
	node1->next = node2;
	node2->next = NULL;
	ft_lstclear(&node1, delthenodes);
}*/