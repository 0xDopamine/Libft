/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:46:47 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 17:22:10 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *s = (char *)str;
	char ltr;
	int	i;

	i = 0;
	ltr = (char)c;
	while(s[i] && i < (int)n)
	{
		if (s[i] == ltr)
			return (s + i);
		i++;
	}
	return NULL;
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_memchr(argv[1], (int)argv[2][0], (size_t)argv[3]), memchr(argv[1], (int)argv[2][0], (size_t)argv[3]));
	return 0;
}*/
