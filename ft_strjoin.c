/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:42:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 14:34:12 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	totallen(char **strs, char *sep, int size)
{
	int	i;
	int	len;
	int	total;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	total = len;
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	j;

	j = 0;
	len = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		total;
	int		i;

	total = totallen(strs, sep, size);
	i = 0;
	tab = (char *)malloc(sizeof(char) * total + 1);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

/*int	main()
{
	char **str = (char **)malloc(sizeof(char*) * 9);
	char sep[] = "1234";

	str[0] = "Hey";
	str[1] = "this is a test";
   	str[2] = "such a wonderful test";
	str[3] = "believe me";
	str[4] = "";
	str[5] = "the best test to ever be done";
	str[6] = "in the whole world";
	str[7] = "trust me";
	str[8] = "-Donald Trump";
	printf("%s", ft_strjoin(9, str, sep));
}*/
