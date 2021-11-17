/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 04:47:34 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:08:32 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/* #include<string.h>
int main ()
{
	t_list *t1 = ft_lstnew("zack");
	t_list *t2 = ft_lstnew("zack");
	t_list *t3 = ft_lstnew("zack");
	t_list *t4 = ft_lstnew("zack");

	t1->next = t2;
	t2->next = t3;
	t3->next = t4;

	printf("%d", ft_lstsize(t1));
}*/
