/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 21:49:44 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/19 22:30:04 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *dest;
	int *null;

	i = 0;
	null = NULL;
	if (min >= max)
		return (null);
	dest = (int*)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min > max)
		return (0);
	else
		return (max - min);
}
