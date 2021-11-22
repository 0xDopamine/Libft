/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:34:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 14:54:58 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	//*(char *)(dest + i) = '\0';
	return (dest);
}
/*
int	main()
{
	char src[50] = "This is a test";
	char dest[50];
	char src1[50] = "This is a test";
	char dest1[50];
	char src2[50] = "This is a test";
	char dest2[50];

	memcpy(dest1, src1, 4);
	printf("%s\n", dest1);
	memcpy(dest2, "coucou", 0);
	printf("%s\n", dest2);
	memcpy(dest, src, 2);
	printf("%s\n", dest);
	return 0;
}*/
