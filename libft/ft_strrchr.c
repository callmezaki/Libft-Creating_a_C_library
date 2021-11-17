/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:35:32 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:15:23 by zait-sli         ###   ########.fr       */
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
		if (s[i] == (char)c)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (0);
}

/* #include <stdio.h>
int main ()
{
  char s[]= "hello lolo lamaama";
   int c = ' ';
  printf("%s", ft_strrchr(s, c));
}*/
