/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:01:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/21 12:47:25 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	size;
	t_list	tmp;

	size = 0;
	tmp = lst;
	while (tmp)
	{
		size++;
		tmp = tmp.next;
	}
	return (size);
}
