/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:14:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 15:53:26 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	unsigned char *s1 = (unsigned char *)str;
	unsigned char *s2 = (unsigned char *)str2;

	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < (int)n)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n%d", ft_memcmp((const void *)argv[1], 
				(const void *)argv[2], 5), memcmp((const void *)argv[1], (const void *)argv[2], 5));
	
}*/
