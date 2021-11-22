/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:01:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/21 17:35:34 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char				ltr;
	unsigned int		i;
	unsigned int		len;

	ltr = (char)c;
	i = 0;
	len = ft_strlen((char *)s);
	while (i <= len)
	{
		if (s[i] == ltr)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_strchr(argv[1], (int)argv[2][0]), strchr(argv[1], (int)argv[2][0]));
	return 0;
}*/
