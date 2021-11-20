/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:04:06 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/18 21:00:26 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;
	char	*f1;
	char	*f2;

	f1 = (char *)s1;
	f2 = (char *)s2;
	a = 0;
	while (f1[a] == f2[a] && a < n - 1)
		a++;
	if (f1[a] != f2[a] && a < n)
		return (((unsigned char *)f1)[a] - ((unsigned char *)f2)[a]);
	return (0);
}
