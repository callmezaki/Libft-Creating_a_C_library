/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:05:07 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:08:06 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

/* void *ft_test(void *c)
{
	return (c);
}
void ft_test1(void *c)
{
	return ;
}
#include<string.h>
int main()
{
	t_list *l = ft_lstnew(" 1 2 3 ");
	t_list *l1 = ft_lstnew(" 4 5 6 ");
	t_list *l2 = ft_lstnew(strdup(" 7 8 9 "));
	t_list *ret;
	l->next = l1;
	l1->next = l2;
	ret = ft_lstmap(l, ft_test, ft_test1);
	printf("%s\n", ret->content);
	printf("%s\n", ret->next->content);
	printf("%s", ret->next->next->content);
}*/