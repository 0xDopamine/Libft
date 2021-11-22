/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:23:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/22 18:51:20 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	res;
	int					sign;
	int					counter;

	sign = 1;
	res = 0;
	i = 0;
	counter = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			counter += 1;
		i++;
	}
	if (counter % 2 != 0)
		sign *= -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	if (ft_strlen((char *)str) >= 19 && sign > 0)
		return -1;
	if (ft_strlen((char *)str) >= 19 && sign < 0)
		return 0;
	return (res * sign);
}
/*#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
	return 0;
}*/
