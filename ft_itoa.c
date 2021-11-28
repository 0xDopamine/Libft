/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:02:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/26 13:56:20 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigit(int nb)
{
	int	count;

	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count += 1;
	}
	return (count);
}

static char	*calres(char *str, int n, int count, int var)
{
	int	res;

	res = 0;
	count--;
	while (n > 0)
	{
		if (var)
		{
			res = n % 10;
			str[count] = res + 48;
			n = n / 10;
			count--;
		}
		else
		{
			str[0] = '-';
			var = 1;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		var;

	var = 1;
	count = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n = n * -1;
		var = 0;
		count = countdigit(n) + 1;
	}
	else
		count = countdigit(n);
	str = (char *)ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	return (calres(str, n, count, var));
}

/*int main()
{
    int n = 0;
    printf("%s", ft_itoa(n));
    return 0;
}*/
