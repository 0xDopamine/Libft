/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:00:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 15:54:13 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	len(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	slen = len(src);
	dlen = len(dest);
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

/*int main()
{
	char str[20] = "write this in to";
	char dest[30];
	char dest2[30];
	//int size = sizeof(str) / sizeof(char);
	//int n = ft_strlcat(dest, str,3);
	//int b = strlcat(dest2,str,3);
	printf("%u %lui  %s   str2:%s", ft_strlcat(dest, str, 3), strlcat(dest2, str, 3), dest,dest2);
}*/
