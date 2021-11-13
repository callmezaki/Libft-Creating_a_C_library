/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:44:06 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/12 22:41:08 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	final;

	a = 0;
	b = 0;
	while (dst[a])
		a++;
	while (src[b])
		b++;
	if (dstsize <= a)
		final = b + dstsize;
	else
		final = b + a;
	b = 0;
	while (src[b] && a < dstsize - 1 && dstsize != 0)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (final);
}

// int main ()
// {
// 	char dst[] = "ait";
// 	char src[] = "zack";
// 	printf("%zu", ft_strlcat(dst, src, 5));
// }
