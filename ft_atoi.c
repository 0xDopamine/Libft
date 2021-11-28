/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:23:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/26 13:53:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calres(const char *str, int i, int sign)
{
	long	temp;
	long	res;

	temp = 0;
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		temp = (temp * 10) + (str[i] - '0');
		if (temp < res && sign == -1)
			return (0);
		if (temp < res && sign == 1)
			return (-1);
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;
	long	temp;

	sign = 1;
	res = 0;
	i = 0;
	temp = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (calres(str, i, sign));
}
/*#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
	return 0;
}*/