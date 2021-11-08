/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:52:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/07 16:49:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57) || (arg >= 97 && arg <= 122) 
			|| (arg >= 65 && arg <= 90))
		return (1);
	else
		return (0);
}