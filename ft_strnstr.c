/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:31:22 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/11 13:31:15 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlen(char *str);

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (small[j] == '\0')
		return (char *)small;
	if (big[i] == '\0')
		return NULL;
	if (len == 0)
		return (char *)big;
	while (big[i] && i < len)
	{
		if (big[i] == small[j])
		{
			j = 0;
			k = i;
			while ((big[k] == small[j]) && small[j] && k < len)
			{
				k++;
				j++;
			}
		}
		if (small[j] == '\0')
			return (char *)big + i;
		i++;
	}
	return NULL;
}
/*int	main(int argc, char **argv)
{
	(void)argc;
	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char * empty = (char*)"";
	printf("%s\n", ft_strnstr(haystack, "a", -1));
    printf("%s\n", ft_strnstr(haystack, "c", -1));
    printf("%s\n", ft_strnstr(empty, "", -1));
	printf("%s\n", ft_strnstr(empty, "coucou", -1));
	printf("%s\n", strnstr(haystack, "a", -1));
    printf("%s\n", strnstr(haystack, "c", -1));
    printf("%s\n", strnstr(empty, "", -1));
	printf("%s\n", strnstr(empty, "coucou", -1));
	return 0;
}*/