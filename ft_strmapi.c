/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:44:18 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 17:00:51 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char    print(unsigned int s, char c)
{
    if (c == 'e')
        c = 'a';
    return c;
}

int main()
{
    char const *s = "Hello";
   printf("%s", ft_strmapi(s, print));   
    return 0;
}*/
