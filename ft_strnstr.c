/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:31:22 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:55:27 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (small[j] == '\0' && len == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	if (small == NULL && big == NULL)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == small[j])
		{
			k = i;
			while ((big[k] == small[j]) && small[j] && k < len)
			{
				k++;
				j++;
			}
		}
		if (small[j] == '\0')
			return ((char *)big + i);
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
