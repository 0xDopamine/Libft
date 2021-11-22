/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:05:31 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 17:09:32 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
}
/*int main() {
   int fd;
   int n = 1337;

   fd = open("test.txt", O_RDWR);
   ft_putnbr_fd(n, fd);
   return 0;
}*/
