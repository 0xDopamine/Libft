/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:31:22 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/25 17:52:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if ((!needle && !haystack) || len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((haystack[i + j] == needle[j]) && needle[j] && i + j < len)
				j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char * empty = (char*)"";
	//printf("%s\n", ft_strnstr(haystack, needle, 0));
	printf("%s\n", ft_strnstr(haystack, empty, 0));
	//printf("%s\n", strnstr(haystack, needle, 0));
	printf("%s\n", strnstr(haystack, empty, 0));
	return 0;
}*/
