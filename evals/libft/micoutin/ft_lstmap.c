/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micoutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 06:00:24 by micoutin          #+#    #+#             */
/*   Updated: 2025/05/06 09:12:02 by micoutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	del_cont(void *cont);
static	void	*to_uppercase(void *content);
static	void	print_list(t_list *lst);
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*l;
	void	*cont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	l = NULL;
	while (lst != NULL)
	{
		cont = f(lst->content);
		elem = ft_lstnew(cont);
		if (elem == NULL)
		{
			del(cont);
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l, elem);
		lst = lst->next;
	}
	return (l);
}
/*
static	void	del_cont(void *cont)
{
	free(cont);
}

static	void	*to_uppercase(void *content)
{
	char	*str;
	char	*copy;
	int	i;
	
	i = 0;
	str = (char *)content;
	copy = ft_strdup(str);
	if (copy == NULL)
		return (NULL);
	while (copy[i] != '\0')
	{
		if (copy[i] >= 'a' && copy[i] <= 'z')
			copy[i] -= 32;
		i++;
	}
	return (copy);
}

static	void	print_list(t_list *lst)
{
	while (lst != NULL)
        {
                printf("%s\n", (char *)lst->content);
                lst = lst->next;
        }
}

int	main(void)
{
	t_list *l = NULL;
	t_list *mapped = NULL;

	ft_lstadd_back(&l, ft_lstnew(ft_strdup("one")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("three")));
	print_list(l);
	printf("\n");
	mapped = ft_lstmap(l, to_uppercase, del_cont);
	if (mapped != NULL)
	{
		print_list(mapped);
		printf("\n");
	}
	ft_lstclear(&l, del_cont);
	ft_lstclear(&mapped, del_cont);

	t_list *l2 = ft_lstnew(ft_strdup("test"));
	t_list *mapped2 = ft_lstmap(l2, NULL, del_cont);
	if (mapped2 == NULL)
		printf("NULL\n");
	ft_lstclear(&l2, del_cont);
	ft_lstclear(&mapped2, del_cont);
	
	t_list *l3 = ft_lstnew(ft_strdup("another test"));
	t_list *mapped3 = ft_lstmap(l3, to_uppercase, NULL);
	if (mapped3 == NULL)
		printf("NULL\n");
	ft_lstclear(&l3, del_cont);
	ft_lstclear(&mapped3, del_cont);

	return (0);
}
*/
