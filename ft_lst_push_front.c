/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:24:03 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/13 14:28:09 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_front(t_list **lst, t_list *new)
{
	t_list	*list;

	list = *lst;
	if (list)
	{
		new->next = list;
		list = new;
	}
	else
		list = ft_lstnew(new->content, new->content_size);
}
