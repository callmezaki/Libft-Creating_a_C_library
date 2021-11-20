/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:37:53 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/18 20:58:06 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		a;
	char		*d;
	const char	*s = (const char *)src;

	d = (char *)dst;
	a = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (len)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		while (a < len)
		{
			d[a] = s[a];
			a++;
		}
	}
	return (d);
}
