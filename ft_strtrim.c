/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:56:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/10 14:11:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>

unsigned int    ft_strlen(char *str);


int     start(char const *s1, char const *set)
{
    int i;
    int j;
    int pos;
  
    i = 0;
    while (set[i])
    {
        j = 0;
        while (s1[j])
        {
            if (set[i] == s1[j])
            {
                pos = j;
                break ;
            }
            j++;
        }
        i++;
    }
    return pos + 1;
}

int     end(char const *s1, char const *set, unsigned int lens, unsigned int lenset, int spos)
{
    int pos;
    int j;
    int ends;
    int endset;
    
    ends = lens - 1;
    endset = lenset - 1;
    j = ends;
    while (endset >= 0)
    {
        while (j > spos)
        {
            if (set[endset] == s1[j])
            {
                pos = j;
                break ;
            }
            j--;
        }
        endset--;
    }
    return pos - 1;
}

char    *trim(char const *s1, int startpos, int endpos)
{
    int i;
    int len;
    char *trim;
 
    i = 0;
    len = endpos - startpos;
    trim = (char *)malloc(len * sizeof(char) + 1);

    if (trim == NULL)
        return NULL;
    while (startpos <= endpos)
    {
      trim[i] = s1[startpos];
      startpos++;
      i++;
    }
    return trim;
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int             endpos;
    int             startpos;

    startpos = start(s1, set);
    endpos = end(s1, set, ft_strlen((char *)s1), ft_strlen((char *)set), startpos);
    
    return trim(s1, startpos, endpos);    
}

/*int main(int argc, char **argv)
{
    char s1[] = "AmineeniAm";
    char set[] = "Am";
    printf("%s", ft_strtrim(s1, set));
    return 0;
}*/