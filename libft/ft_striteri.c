/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:37:39 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:27:16 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* void	*test(unsigned int i, char *s)
{
	return (&s[i]);
}

int main()
{
	char s[] = "zakariae";
	unsigned int i = 0;
	ft_striteri(s ,test);
	printf("%s", s);
}*/
