/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:47:04 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:10:04 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

#include<stdlib.h>

static int	words_count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (i == 0 || s[i - 1] == c)
		{
			if (s[i] != c && s[i] != '\0')
				words++;
		}
		i++;
	}
	return (words);
}

static void	move_word(char *from, char *to, int start, int j)
{
	int	a;

	a = 0;
	while (j > 0)
	{
		to[a] = from[start];
		a++;
		start++;
		j--;
	}
	to[a] = '\0';
}

static void	ft_free(char **p, int a)
{
	while (a >= 0)
		free(p[--a]);
	free(p);
}

static void	ft_lastpart(char **p, char const *s, char c)
{
	int		i;
	int		len;
	int		a;

	i = 0;
	len = 0;
	a = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i + len] != c && s[i + len] != '\0')
			len++;
		if (len != 0)
		{
			p[a] = (char *)malloc(len + 1);
			if (p[a] == NULL)
				ft_free(p, a);
			move_word((char *)s, p[a], i, len);
			a++;
		}
		i = i + len;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		a;
	char	**p;

	if (!s)
		return (NULL);
	i = 0;
	len = words_count((char *)s, c);
	a = 0;
	p = (char **)malloc(sizeof(char *) * (words_count((char *)s, c) + 1));
	if (p == NULL)
		return (NULL);
	ft_lastpart(p, s, c);
	p[len] = NULL;
	return (p);
}
/* int main()
{
    int i;
    char c[] = "dsr dfd\0j n\0i";
    // char c[] = "split||||||this||||for||me|||!|";
	char **str = ft_split(c,' ');
    for(i = 0; str[i];i++)
            printf("tab[%d] = %s \n",i, str[i]);
}
int main ()
{
	int    i;
    char c[] ="\0gb\0ijbfvs";

    i = 0;
    while (i <= 1)
    {
        printf("tab[%d] = %s \n", i, ft_split(c, '\0')[i]);
        i++;
    }
}*/