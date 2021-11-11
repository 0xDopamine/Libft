/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:36:18 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/10 19:52:06 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	ltr;

	ltr = (char)c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == ltr)
			return (char *)s+i;
		i--;
	}
	return NULL;
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_strrchr(argv[1], argv[2][0]), strrchr(argv[1], argv[2][0]));
	return 0;
}*/
