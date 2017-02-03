/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:10:02 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/24 21:02:07 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *end;

	end = *begin_list;
	if (!end)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (end->next)
	{
		end = end->next;
	}
	end->next = ft_create_elem(data);
}
