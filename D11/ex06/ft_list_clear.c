/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:49:13 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/25 22:44:38 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*pt;

	list = *begin_list;
	pt = 0;
	while (list)
	{
		pt = list->next;
		free(list);
		list = pt;
	}
	*begin_list = 0;
}
