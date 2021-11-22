/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:45:49 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:26:29 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
		ch += 32;
	return (ch);
}

/*int main()
{
    char ltr = 'c';
    char ltr2 = '4';
    char ltr3 = 'D';
    char ltr4 = '.';
    printf("1: %c\n", (char)ft_tolower((int)ltr));
    printf("1: %c\n", (char)tolower((int)ltr));
    printf("2: %c\n", (char)ft_tolower((int)ltr2));
    printf("2: %c\n", (char)tolower((int)ltr2));
    printf("3: %c\n", (char)ft_tolower((int)ltr3));
    printf("3: %c\n", (char)tolower((int)ltr3));
    printf("4: %c\n", (char)ft_tolower((int)ltr4));
    printf("4: %c\n", (char)tolower((int)ltr4));
    
    return 0;
}*/
