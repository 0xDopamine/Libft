/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:56:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/27 15:31:04 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*str1;

	str1 = (char *)str;
	i = 0;
	while (i < n)
	{
		str1[i] = c;
		i++;
	}
	return (str);
}
// int	main()
// {
// 	int a[] = {0};
// 	ft_memset(a, 127, 4);
// 	ft_memset(a, 255, 3);
// 	ft_memset(a, 255, 2);
// 	ft_memset(a, 255, 1); 
// 	printf("%d\n", a[0]);
// 	return 0;
// }
