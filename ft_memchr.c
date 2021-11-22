/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:46:47 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 15:36:18 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;
	char	ltr;
	int		i;

	s = (char *)str;
	i = 0;
	ltr = (char)c;
	while (i < (int)n)
	{
		if (s[i] == ltr)
			return (s + i);
		i++;
	}
	return (NULL);
}
/*int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n%s", ft_memchr(argv[1], 
	(int)argv[2][0], (size_t)argv[3]), memchr(argv[1], 
	(int)argv[2][0], (size_t)argv[3]));
	return 0;
}
int main(void)*/
/*{
        char s[] = {0, 1, 2 ,3 ,4 ,5};
        printf("%s", ft_memchr(s, 0, 1));
        printf("%s", ft_memchr(s, 2, 3));
        printf("%s", ft_memchr(s, 2 + 256, 3));
        return (0);
}*/
