/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 23:22:08 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/20 15:31:27 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
	{
		return (i);
	}
	if ((j < i && j > k) || (j > i && j < k))
	{
		return (j);
	}
	if ((k < i && k > j) || (k > i && k < j))
	{
		return (k);
	}
	return (0);
}
