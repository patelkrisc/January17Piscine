/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 23:30:05 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/24 23:37:33 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*ll;

	ll = begin_list;
	if (!ll)
		return (0);
	while (ll->next)
	{
		ll = ll->next;
	}
	return (ll);
}
