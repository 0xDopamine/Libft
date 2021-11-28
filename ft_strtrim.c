/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:45:20 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:46:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[i]) && s1[i])
		i--;
	end = i;
	str = (char *)ft_calloc(end - start + 2, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	return (str);
}

// int main(int argc, char **argv)
// {
//     char s1[] =  "12312heheheh33112";
//     char set[] = "123";
//     printf("%s", ft_strtrim(s1, set));
//     return 0;
// }
