/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 05:12:21 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/06 05:58:25 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	printer(void *cont);
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
static	void	printer(void *cont)
{
	printf("%s\n", (char *)cont);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("Node1"));
	t_list *node2 = ft_lstnew(ft_strdup("Node2"));
	t_list *node3 = ft_lstnew(ft_strdup("Node3"));
	t_list *l = NULL;

	if (node1 == NULL || node2 == NULL || node3 == NULL)
		return (1);
	l = node1;
	node1->next = node2;
	node2->next = node3;
	ft_lstiter(l, printer);
	ft_lstiter(l, NULL);
	ft_lstiter(NULL, printer);
        ft_lstiter(NULL, NULL);

	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
