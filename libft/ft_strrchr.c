/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:35:32 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/07 19:33:07 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (0);
}

//#include <stdio.h>
//int main ()
//{
//   char s[]= "hello lolo lamaama";
//    int c = ' ';
//   printf("%s", ft_strrchr(s, c));
//}
