/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:54:10 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 17:02:46 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main()
{
    int fd = open("test.txt", O_RDWR);
    ft_putchar_fd('a', fd);
    return 0;
}*/
