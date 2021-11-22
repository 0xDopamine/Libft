/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:33:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:25:50 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	return (ch);
}

/*int main()
{
    char ltr = 'c';
    char ltr2 = '4';
    char ltr3 = 'A';
    char ltr4 = '.';
    printf("1: %c\n", (char)ft_toupper((int)ltr));
    printf("1: %c\n", (char)toupper((int)ltr));
    printf("2: %c\n", (char)ft_toupper((int)ltr2));
    printf("2: %c\n", (char)toupper((int)ltr2));
    printf("3: %c\n", (char)ft_toupper((int)ltr3));
    printf("3: %c\n", (char)toupper((int)ltr3));
    printf("4: %c\n", (char)ft_toupper((int)ltr4));
    printf("4: %c\n", (char)toupper((int)ltr4));
    
    return 0;
}*/
