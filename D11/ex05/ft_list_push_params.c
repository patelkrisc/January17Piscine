/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 18:02:12 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/25 22:06:46 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*pt;

	pt = ft_create_elem(data);
	pt->next = *begin_list;
	*begin_list = pt;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*pt;
	int			i;

	pt = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&pt, av[i]);
		i++;
	}
	if (!pt)
		return (0);
	return (pt);
}
