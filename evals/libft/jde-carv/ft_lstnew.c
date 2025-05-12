/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:56:54 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:18:31 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*next_node;

	next_node = malloc(sizeof(t_list));
	if (!next_node)
		return (NULL);
	next_node->content = content;
	next_node->next = NULL;
	return (next_node);
}
/*int main()
{
	int	number = 42;
	char	*str = "Hello, world!";
	t_list	*node1 = ft_lstnew(&number);
	t_list	*node2 = ft_lstnew(str);
	node1->next = node2; 

	printf("First node content value: %d\n", *(int *)node1->content);
	printf("Second node content value: %s\n", (char *)node2->content);
	printf("Address of next node pointed by node1 %p\n", (void *)node1->next);
	printf("Address of node2 %p\n", (void *)node2);
	printf("Content of the next node pointed by node1 %s\n", 
	(char *)node1->next->content); lembrar de por em cima
}*/
