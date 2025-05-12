/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:32:46 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/19 21:17:46 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstlen;

	lstlen = 0;
	while (lst)
	{
		lst = lst->next;
		lstlen++;
	}
	return (lstlen);
}
/*int main()
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));
	t_list	*node4 = malloc(sizeof(t_list));

	if(!node1 || !node2 || !node3 || !node4)
	{
		return (1);
	}
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	printf("%d", ft_lstsize(node1));
	return (0);
}*/