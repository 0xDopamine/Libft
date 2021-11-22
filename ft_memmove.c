/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:51:38 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:02:21 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int		i;
	int		j;
	char	*src;
	char	*dest;

	src = (char *)str2;
	dest = (char *)str1;
	i = 0;
	j = 0;
	if ((char *)str2 == 0 && (char *)str1 == 0)
		return (0);
	if (dest > src)
	{
		while (n--)
			*(dest + n) = *(src + n);
	}
	else
	{
		while (i++ < (int)n)
		{
			*(dest + i) = *(src + j);
			j++;
		}
	}
	return (dest);
}
/*int    main()
{
    //char src[50] = "abcdef";
    char dest[50] = "Hello";

    printf("%s\n%s", ft_memmove(dest, dest+2, 4), memmove(dest, dest+2, 4));
    return 0;
}*/
