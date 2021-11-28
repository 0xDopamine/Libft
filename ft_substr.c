/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:42:57 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:51:59 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;
	char			*s1;

	if (s == NULL)
		return (NULL);
	s1 = (char *)s;
	i = start;
	j = -1;
	if (len == 0 || start > ft_strlen(s1))
		return (ft_strdup(""));
	if (len > ft_strlen(s1 + start))
		str = (char *)ft_calloc((ft_strlen(s1 + start) + 1), sizeof(char));
	if (len <= ft_strlen(s1 + start))
		str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] && (size_t)++j < len)
		str[j] = s1[i++];
	return (str);
}
// int main()
// {
//     char str[] = "Amine Hello";
//     char *s = ft_substr(str, 10, 2);
//     printf("%s\n", s);
//     return 0;
// }
