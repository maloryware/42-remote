/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:26:02 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:16:35 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main()
{
	char *str = "jorginho";

	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));
	t_list *node5 = malloc(sizeof(t_list));

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	node5->content = str;

	printf("Memory address of node 5: %p\n", (void *)node5);
	printf("Memory address of node 5: %p\n\n", (void *)ft_lstlast(node1));
	printf("Memory address of node 5: %s\n\n", (char *)ft_lstlast(node1)->
	content); lembrar de por a linha em cima
}*/