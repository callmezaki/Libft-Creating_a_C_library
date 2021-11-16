/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:12:32 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/16 06:33:21 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*x;

	x = (char *) str;
	i = 0;
	while (i < n)
	{
		if (x[i] == (char)c)
		{	
			return (&x[i]);
		}
	i++;
	}
	return (0);
}
// int main ()
// {
// 	char s[] = "hello world";
// 	int c = 'l';
// 	size_t n = 12;
// 	printf("%s", ft_memchr(s, c, n));
// }
