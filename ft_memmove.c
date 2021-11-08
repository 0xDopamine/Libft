/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:51:38 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 15:53:21 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *str1, const void *str2, size_t n)
{
    int    i;
    int    j;
    char *dest = (char *)str1;
    char *src = (char *)str2;          

    i = 0;
    j = 0;
	if (src == 0 && dest == 0)
		return (0);
    if (src > dest)
    {    
        while (src[i] && i < (int)n)
        {
            src[i] = dest[j];
            j++;
            i++;
        }
    }
    if (src < dest)
    {    
        while (src[i] && i < (int)n)
        {
            dest[j] = src[i];
            j++;
            i++;
        }
    }
    return dest;
    
}

/*int    main()
{
    //char src[50] = "abcdef";
    char dest[50] = "HigdwiqdiqhIg";

    printf("theirs: %s\nmine: %s", memmove(dest+4, dest+8, 10), ft_memmove(dest+4, dest+8, 10));
    return 0;
}*/