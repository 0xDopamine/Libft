/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:45:20 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/22 18:56:36 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen((char *)s1);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = len - 1;
	while (ft_strchr(set, s1[i]))
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

/*int main(int argc, char **argv)
{
    char s1[] =  "3211123Hllo2213";
    char set[] = "123";
    printf("%s", ft_strtrim(NULL, NULL));
    return 0;
}*/
