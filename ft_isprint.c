/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 08:53:55 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 15:59:39 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return 1;
	else
		return (0);
}

/*int main()
{
	char a, b, c, d, e, f;

	a = '1';
	b = '2';
	c = 'l';
	d = '5';
	e = 'A';
	f = '|';

	printf("a %d\n", ft_isprint(a));
	printf("b %d\n", ft_isprint(b));
	printf("c %d\n", ft_isprint(c));
	printf("d %d\n", ft_isprint(d));
	printf("e %d\n", ft_isprint(e));
	printf("f %d\n", ft_isprint(f));

	printf("a %d\n", isprint(a));
	printf("b %d\n", isprint(b));
	printf("c %d\n", isprint(c));
	printf("d %d\n", isprint(d));
	printf("e %d\n", isprint(e));
	printf("f %d\n", isprint(f));
}*/

