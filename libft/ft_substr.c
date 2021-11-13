/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:59:58 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/09 12:48:52 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			a;
	size_t			x;
	char			*sub;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (i != start && s[i])
		i++;
	a = 0;
	while (a < len)
	{
		sub[x] = s[i];
		a++;
		i++;
		x++;
	}
	sub[x] = '\0';
	return (sub);
}
