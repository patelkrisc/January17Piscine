/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 19:48:56 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/19 20:24:05 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
  int i = 0;
  int *r = ft_range(74, 85);
  while (r[i])
  {
    printf("The range is %d\n", r[i++]);
  }
}
