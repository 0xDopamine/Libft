/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:00:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:37:35 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	j;
	size_t	l;

	slen = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (slen);
	dlen = ft_strlen(dest);
	l = size - dlen - 1;
	j = dlen;
	i = 0;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && i < l)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if ((size > 0) || (dlen < slen))
		dest[j] = '\0';
	return (dlen + slen);
}

// int main()
// {
// 	char str[20] = "write this in to";
// 	char dest[30];
// 	char dest2[30];
// 	printf("str1: %u", ft_strlcat(NULL, str, 5));
// }
