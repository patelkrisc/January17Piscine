/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 16:36:02 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/14 20:05:05 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		b;

	i = 1;
	b = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == i)
	{
		return (nb);
	}
	while (i <= power)
	{
		b = b * nb;
		i++;
	}
	return (b);
}
