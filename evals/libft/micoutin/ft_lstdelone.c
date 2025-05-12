/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 02:00:40 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/06 04:15:01 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	del_cont(void *cont);
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
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
	t_list	*node1;
	char *cntd;

	cntd = ft_strdup("To be deleted");
	if (cntd == NULL)
		return (1);
	node1 = malloc(sizeof(t_list));
	if (node1 == NULL)
	{
		free(cntd);
		return (1);
	}
	node1->content = cntd;
	node1->next = NULL;
	ft_lstdelone(node1, del_cont);
	printf("\n");
	
	ft_lstdelone(NULL, del_cont);
	printf("\n");
	
	cntd = ft_strdup("To be deleted again");
	if (cntd == NULL)
		return (1);
	node1 = malloc(sizeof(t_list));
	if (node1 == NULL)
	{
		free(cntd);
		return (1);
	}
	node1->content = cntd;
	node1->next = NULL;
	ft_lstdelone(node1, NULL);
	printf("\n");

	free(cntd);
	free(node1);

	return (0);
}
*/
