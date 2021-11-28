/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:36:18 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:39:56 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ltr;

	ltr = (char)c;
	i = ft_strlen(s);
	if (s)
	{
		while (i)
		{
			if (s[i] == ltr)
				return ((char *)s + i);
			i--;
		}
		if (s[0] == ltr)
			return ((char *)s);
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_strrchr(argv[1], argv[2][0]), strrchr(argv[1], argv[2][0]));
	return 0;
}*/