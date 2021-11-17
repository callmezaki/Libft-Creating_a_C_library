/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:58:57 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:06:10 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	*s;

	s = (int *)malloc(size * count);
	if (s == NULL)
		return (NULL);
	s = ft_memset(s, 0, count * size);
	return (s);
}
/* int main()
{
	printf("%s", ft_calloc( 5 , 1));
}*/
