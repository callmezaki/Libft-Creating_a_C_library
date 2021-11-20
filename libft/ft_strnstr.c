/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:13:24 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/19 08:33:59 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && (str[i + j] == to_find[j]) && (i + j) < len)
		{
			if (to_find[j + 1] == '\0')
				return (&((char *)str)[i]);
			j++;
		}
		i++;
	}
	return (0);
}
