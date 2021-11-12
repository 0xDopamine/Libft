/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:42:57 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/12 13:37:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *str);
char	*ft_strdup(char *src);
void    *ft_calloc (size_t count, size_t size);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int j;
    char    *str;
    char *s1;

    if (s == NULL)
        return NULL;
    s1 = (char *)s;
    i = start;
    j = 0;
    
    if (len == 0 || start > strlen(s1))
        return ft_strdup("");
    if (len > ft_strlen(s1 + start))
        str = (char *)ft_calloc((ft_strlen(s1 + start) + 1), sizeof(char));
    if (len <= ft_strlen(s1 + start))
        str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!str)
        return NULL;
    while (s1[i] && (size_t)j < len)
    {
       str[j] = s1[i];
        i++;
        j++;
    }
    return str;
}

/*int main()
{
    char *str = strdup("0123456789");
	char *s = ft_substr(str, 9, 10);
    printf("%s\n", s);
    return 0;
}*/