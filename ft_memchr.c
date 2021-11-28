/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:46:47 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 16:20:28 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	ltr;

	s = (unsigned char *)str;
	ltr = (unsigned char)c;
	i = 0;
	while (n)
	{
		if (s[i] == ltr)
			return ((unsigned char *)(s + i));
		i++;
		n--;
	}
	return (NULL);
}

// int	main()
// {
// 	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
//         size_t size = 10;

//         printf ("%s\n%s", (char *)memchr(src, '\200', size),
//	(char *)ft_memchr(src, '\200', size));
// }