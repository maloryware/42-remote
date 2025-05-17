/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:14:51 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/19 21:15:23 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	jorginhotoupper(void *content)
{
	char *str = (char *)content;
	*str = ft_toupper(*str);
}
int	main()
{
	char *str1 = malloc(3 * sizeof(char));
	char *str2 = malloc(2 * sizeof(char));
	char *str3 = malloc(2 * sizeof(char));

	*str1 = 'a';
	*str2 = 'b';
	*str3 = 'c';

	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*currentnode = node1;
	

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));


	node1->content = str1;
	node2->content = str1;
	node3->content = str3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstiter(node1, jorginhotoupper);
	printf("Node1 content %s\n", (char *)node1->content);
	printf("Node2 content %s\n", (char *)node2->content);
	printf("Node3 content %s\n", (char *)node3->content);
}*/