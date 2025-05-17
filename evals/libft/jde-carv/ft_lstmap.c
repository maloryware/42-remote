/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:43:13 by jde-carv          #+#    #+#             */
/*   Updated: 2025/04/20 15:10:33 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*void jorginhotoupper(void *content)
{
    char *str = (char *)content;
    *str = toupper(*str);
}

void jorginhodel(void *content)
{
    free(content);
}

int main()
{
    char *str1 = malloc(3 * sizeof(char));
    char *str2 = malloc(2 * sizeof(char));
    char *str3 = malloc(2 * sizeof(char));

    *str1 = 'a';
    *str2 = 'b';
    *str3 = 'c';

    t_list *maplst;
    t_list *node1;
    t_list *node2;
    t_list *node3;

    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node3 = malloc(sizeof(t_list));

    node1->content = str1;
    node2->content = str2;
    node3->content = str3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    maplst = ft_lstmap(node1, jorginhotoupper, jorginhodel);

    t_list *currentnode = maplst;
    while (currentnode)
    {
        printf("Content of current node: %s\n", (char *)
		currentnode->content); lembrar de por em cima
        currentnode = currentnode->next;
    }

    return (0);
}*/
