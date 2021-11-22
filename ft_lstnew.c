/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:06:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2021/11/20 19:26:59 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
int main()
{
    t_list root;
    root.content = "dude";
    root.next = malloc(sizeof(t_list));
    root.next->content = "hey";
    root.next->next = NULL;

    printf("%s", (char *)ft_lstnew(root.content));
    return 0;
}*/
