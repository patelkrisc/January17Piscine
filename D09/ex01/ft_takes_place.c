/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:49:49 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/20 17:04:49 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_hour(int hour)
{
	if (hour < 12)
	{
		if (hour == 0)
			hour = 12;
		printf("%d.00 A.M. ", hour);
	}
	else
	{
		if (hour > 12)
			hour -= 12;
		printf("%d.00 P.M. ", hour);
	}
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour < 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		print_hour(hour);
		printf("AND ");
		print_hour(hour + 1);
		printf("\n");
	}
}
