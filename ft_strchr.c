/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:01:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 17:26:09 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char ltr = (char)c;
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ltr)
			return (char *)s+i;
		i++;
	}
	return NULL;
}

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_strchr(argv[1], (int)argv[2][0]), strchr(argv[1], (int)argv[2][0]));
	return 0;
}
