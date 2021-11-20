/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:44:06 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/19 18:35:59 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	final;

	b = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize < a || dstsize == 0)
		return (b + dstsize);
	else
		final = b + a;
	b = 0;
	while (src[b] && a < dstsize - 1)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (final);
}
int main ()
{
	const char s[] = "cdef";
	char d[] = "ab";

	printf("%zu\n", ft_strlcat(d, s, 4));
	printf("%s", d);
}
