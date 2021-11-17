/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:15:58 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 01:26:41 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < (unsigned int)len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* int main()
 {
 	char b[] = "zakariae";
 	int c = '$';
 	printf("%s\n", ft_memset(b , c, 18));
 }*/
