/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:54:34 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/11 12:52:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
    int     i;
	char    *str = (char *)s;

	i = 0;
	while (i < (int)n)
	{
		str[i] = '\0';
		i++;
    }
}

void    *ft_calloc (size_t count, size_t size)
{
    unsigned int    len;
    void    *ptr;

    len = count * size;
    ptr = malloc(len * sizeof(char));
    ft_bzero(ptr, len);
    return ptr;
}

 /*int    main()
 {
     char *str;
     char *str1;

    str = (char *)ft_calloc(6, sizeof(int));
    str1 = (char *)calloc(6, sizeof(char));
     //str = "Hellooo";
     printf("%s\n%s", str, str1);

     return 0;
 }*/