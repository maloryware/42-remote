/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:06:05 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:15:15 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*void	delthenodencontent(void *content)
{
	free(content);
}
int main()
{
	t_list	*node1;
	t_list	*node2;
	int	*number = malloc(sizeof(int));
	*number = 42;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node1->content = number;
	node1->next = node2;
	node2->next = NULL;
	printf("%d", *(int *)node1->content);
	if(*(int)*node1->content == 42)
	{
		ft_lstdelone(node1, delthenodencontent);
		printf("Node1 content deleted");
	}
	return (0);
}*/