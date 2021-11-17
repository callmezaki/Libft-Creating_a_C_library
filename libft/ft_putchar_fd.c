/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zait-sli <zait-sli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:02:24 by zait-sli          #+#    #+#             */
/*   Updated: 2021/11/17 02:09:39 by zait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/* #include <sys/stat.h>
#include <fcntl.h>
int main()
{
	ft_putchar_fd('a', 1);
}
int main()
{
	int fd;

	fd = open("txt.txt", O_CREAT | O_RDWR);
	printf("%d", fd);
	ft_putchar_fd('5', fd);
}*/
