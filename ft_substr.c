/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:42:57 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 14:25:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int i;
    unsigned int j;
    char    *str;

    str = (char *)malloc((len * sizeof(char)) + 1);
    i = start;
    j = 0;
    if(start == (unsigned int)len)
        return str;
    if (str == NULL)
        return NULL;
    while (j < (unsigned int)len)
    {
        str[j] = s[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return str;
}

/*int main()
{
    char *str = "Amine";
    char *str2 = "i2h129hUIGq";
    char *str3 = "ojqoHQHQBNbiwqb2441-";
    char *str4 = "eoqrjorq";
    printf("%s\n", ft_substr(str, 1, 4));
    printf("%s\n", ft_substr(str2, 2, 2));
    printf("%s\n", ft_substr(str3, 3, 4));
    printf("%s\n", ft_substr(str4, 6, 1));
    return 0;
}*/