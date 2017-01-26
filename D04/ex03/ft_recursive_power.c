/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 17:55:27 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/14 18:40:19 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power >= 2)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
