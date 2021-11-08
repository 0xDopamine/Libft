/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:31:22 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 15:54:27 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (small[i] == '\0')
		return (char *)big;
	while (big[i] && i < (int)len)
	{
		if (big[i] == small[j])
		{
			j = 0;
			k = i;
			while ((big[k] == small[j]) && small[j] && k < (int)len)
			{
				k++;
				j++;
			}
		}
		if (small[j] == '\0')
			return (char *)big + i;
		i++;
	}
	return NULL;
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_strnstr(argv[1], argv[2], 2), strnstr(argv[1], argv[2], 2));
	return 0;
}*/
