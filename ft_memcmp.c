/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:14:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:46:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *str, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *)str;
	s2 = (unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (int)n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*int	main(int argc, char **argv)
{
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	(void)argc;
	printf("%d\n%d", ft_memcmp(s, s2, 0), memcmp(s, s2, 0));
	
}*/
