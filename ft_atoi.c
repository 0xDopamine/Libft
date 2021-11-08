/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:23:56 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/08 17:41:12 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;
	int	counter;

	sign = 1;
	res = 0;
	i = 0;
	counter = 0;
	if (str[i] <= 32)
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
	return (res * sign);
}
int	main(int argc, char **argv)

	char escape[] = {9, 10, 11, 12, 13, 0};
    char *e(escape);
	printf("%d\n", ft_atoi((e + "1"));
	printf("%d\n", ft_atoi((e + "+1"));
	printf("%d\n", ft_atoi((e + "-1"));
	printf("%d\n", ft_atoi((e + "+42lyon"));
	printf("%d\n", ft_atoi((e + to_string(INT_MAX)));
	printf("%d\n", ft_atoi((e + to_string(INT_MIN))));

	return 0;
	}
