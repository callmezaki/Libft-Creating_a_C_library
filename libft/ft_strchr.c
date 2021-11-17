/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:07:25 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:10:17 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*sf;

	sf = (char *)s;
	i = 0;
	while ((size_t)i <= ft_strlen(sf))
	{
		if (s[i] == (char)c)
		{
			return (&((char *)sf)[i]);
		}
		i++;
	}
	return (0);
}

/* #include<stdio.h>
int main ()
{
	char s[] = "hello world";
	int c = 'l';
	printf("%s", ft_strchr(s, c));
}*/
