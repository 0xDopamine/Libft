/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:25:18 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/22 17:16:20 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int    check(char s, char c)
{
    if (s == c)
        return (0);
    return (1);
}

int wdlen(char const *s, char c)
{
    int i;

    i = 0;
    while(s[i] && check(s[i], c))
        i++;
    return i;
}

int wdcount(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 1;
    while (s[i])
    {
        if (s[i] != c && s[i + 1] == c)
            count += 1;
        i++;
    }
    return count;
}
char    **ft_split(char const *s, char c)
{
    int i;
    int count;
    char    **str;
    int j;
    int len;
    int k;
    i = 0;
    j = 0;
    count = wdcount(s, c);
    str = (char **)ft_calloc(count + 1, sizeof(char *));
    while(s[i])
    {
        while(s[i] && !check(s[i], c))
            i++;
        if (!s[i])
            break ;
        len = wdlen(s, c);
        str[j] = (char *)ft_calloc(len + 1, sizeof(char));
        k = 0;
        while(k < len)
        {
            str[j][k] = s[i];
            k++;
            i++;
        }
        j++;
    }
    return str;
}

/*int main()
{
    char c = '|';
    char str[] = "split  ||this|for|me|||||!|";
    int i = 0;
    char **ptr = ft_split(str, c);
    while(ptr[i])
    {
        printf("%s", ptr[i]);
        i++;
    }
    return 0;
}*/