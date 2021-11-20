/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:59:58 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/19 08:34:15 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			x;
	size_t			xlen;
	char			*sub;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	xlen = ft_strlen(&s[start]);
	if (xlen >= len)
		xlen = len;
	sub = (char *)malloc(xlen + 1);
	if (!sub)
		return (NULL);
	x = 0;
	while (s[start] && x < len)
		sub[x++] = s[start++];
	sub[x] = '\0';
	return (sub);
}
