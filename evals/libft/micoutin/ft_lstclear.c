/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 03:49:18 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/06 05:07:29 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	del_cont(void *cont);
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
static	void	del_cont(void *cont)
{
	if (cont != NULL)
	{
		printf("%s\n", (char *)cont);
		free(cont);
	}
}

int	main(void)
{
	t_list	*l = NULL;

	l = ft_lstnew(ft_strdup("Node1"));
	if (l == NULL)
		return (1);
	l->next = ft_lstnew(ft_strdup("Node2"));
	if (l->next == NULL)
		return (1);
	l->next->next = ft_lstnew(ft_strdup("Node3"));
	if (l->next->next == NULL)
		return (1);
	ft_lstclear(&l, del_cont);
	printf("\n");

	ft_lstclear(&l, del_cont);
        printf("\n");

	l = NULL;
	ft_lstclear(&l, del_cont);
	printf("\n");

	l = ft_lstnew(ft_strdup("'Nother node"));
	if (l == NULL)
		return (1);
	ft_lstclear(&l, NULL);
	free(l->content);
	free(l);

	return (0);
}
*/
