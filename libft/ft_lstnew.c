/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:02:15 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:08:20 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/* int main()
{
	t_list *t1 = ft_lstnew("sss");
	t_list *t2 = ft_lstnew("aaa");

	t1 ->next = t2;
	printf("%s\n", t1->content);
	printf("%s", t1->next->content);
}*/
