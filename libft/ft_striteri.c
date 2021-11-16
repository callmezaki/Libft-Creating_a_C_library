/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:37:39 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/16 06:56:43 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void *test(unsigned int i, char* s)
// {
// 	s[0] -= i;
// 	return(s);	
// }

// int main()
// {
// 	char *s = "zakariae";
// 	ft_striteri(s ,test(32 , s));
// 	printf("%s", s);
// }