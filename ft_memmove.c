/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:51:38 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:25:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*src;
	char	*dest;

	src = (char *)str2;
	dest = (char *)str1;
	i = 0;
	j = 0;
	if (!src && !dest)
		return (0);
	if (dest > src)
	{
		while (n--)
			dest[n] = src[n];
	}
	else
	{
		while (i < n)
			dest[i++] = src[j++];
	}
	return (dest);
}
