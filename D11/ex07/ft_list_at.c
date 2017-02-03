/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:50:18 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/25 23:40:06 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*list;
	unsigned int		p;

	p = 0;
	list = begin_list;
	if (!list)
		return (0);
	while (list && p < nbr)
	{
		list = list->next;
		p++;
	}
	return (list);
}
