/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:47:04 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/13 02:27:32 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

static int	words_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		// if (s[i] != c && c != '\0' && (s[i + 1] == c || s[i + 1] == '\0'))
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			// printf("%c %d\n",s[i], i);
			count++;
		}
		else
			i++;
	}
	return (count);
}

static void	move_word(char *from, char *to, int start, int j)
{
	int	a;

	a = 0;
	while (j > 0)
	{
		to[a] = from[start];
		// printf("[%d]\t%c\n",a, to[a]);
		a++;
		start++;
		j--;
	}
	to[a] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	if (!s)
		return (NULL);
	// printf("%d\n",words_count((char *)s, c));
	tab = (char **)malloc(sizeof(char *) * (words_count((char *)s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			j++;
		}
		if (j != 0)
		{
			tab[a] = (char *)malloc(j + 1);
			if (tab[a] == NULL)
			{
				while (a >= 0)
				{
					a--;
					free(tab[a]);
				}
				free(tab);
			}
			move_word((char *)s, tab[a], (i - j), j);
			a++;
		}
	}
	tab[a] = NULL;
	return (tab);
}
// int main()
// {
//     int i;
//     char c[] = "m\0jn\0i";
//     // char c[] = "split||||||this||||for||me|||!|";
// 	char **str = ft_split(c,' ');
//     for(i = 0; str[i];i++)
//             printf("tab[%d] = %s \n",i, str[i]);
// }
// int main ()
// {
// 	int    i;
//     char c[] ="\0gb\0ijbfvs";

//     i = 0;
//     while (i <= 1)
//     {
//         printf("tab[%d] = %s \n", i, ft_split(c, '\0')[i]);
//         i++;
//     }
// }