/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 19:53:46 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/24 23:02:28 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*bp;
	int		size;

	size = 0;
	bp = begin_list;
	while (bp)
	{
		bp = bp->next;
		size++;
	}
	return (size);
}
