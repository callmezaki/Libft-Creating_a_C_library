/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:01:45 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/12 02:00:49 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len1;
	int	start;

	len1 = ft_strlen(set);
	i = 0;
	j = 0;
	while (j < len1)
	{
		j = 0;
		while (s1[i] != set[j])
			j++;
		if (s1[i] == set[j])
			start = i;
		i++;
	}
	return (start);
}

static int	ft_end(char const *s1, char const *set, int start)
{
	int	j;
	int	end;
	int	len1;

	len1 = ft_strlen(set);
	end = ft_strlen(s1) - 1;
	j = 0;
	while (end >= start && j < len1)
	{
		j = 0;
		while (s1[end] != set[j])
			j++;
		if (s1[end] == set[j])
			end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*scopy;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set, start);
	end += 1;
	scopy = (char *)malloc((end - start) + 2);
	if (scopy == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		scopy[i] = s1[start];
		i++;
		start++;
	}
	scopy[i] = '\0';
	return (scopy);
}
// int main()
// {
/*     char s[] = "   \t  \n\n \t\t  \n\n\nHello \t
  Please\n Trim me !\n   \n \n \t\t\n  ";
//     char set[] = " \n\t";*/
//     printf("%s|", ft_strtrim(s,set));
// }