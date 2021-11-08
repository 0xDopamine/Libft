/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:56:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 15:53:56 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;
	char	*str1;
	str1 = (char *)str;

	i = 0;
	while (i < (int)n)
	{
		str1[i] = c;
		i++;
	}
	return 0;
}

/*int	main()
{
	char str[50] = "This is a nigga";
	char str1[50] = "This is a nigga";
	ft_memset(str, '$', 10);
	printf("%s\n", str);
	memset(str1, '$', 10);
	printf("%s", str1);
	return 0;
}*/
