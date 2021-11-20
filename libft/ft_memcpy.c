/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:37:14 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/18 21:00:29 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		a;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	a = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (a < n)
	{
		d[a] = s[a];
		a++;
	}
	return (d);
}
