/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:36:48 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/19 08:33:39 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src [a])
	{
		a++;
	}
	if (dstsize != 0)
	{
		while (src[b] && b < (dstsize - 1))
		{
			dst[b] = src[b];
			b++;
		}
		dst[b] = '\0';
	}
	return (a);
}
