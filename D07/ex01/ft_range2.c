/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:27:57 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/19 20:28:50 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *rs;

	if (min >= max)
		return (0);
	rs = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		rs[i - min] = i;
		i++;
	}
	return (rs);
}
