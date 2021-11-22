/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:29:28 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 17:01:57 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	if (s && f)
		while (s[++i])
			f(i, &s[i]);
}

/*void print(unsigned int i, char *s)
{
    printf("%s", s);
}

int main()
{
    char *s = "hallo";
    ft_striteri((s), print);
    return 0;
}*/
