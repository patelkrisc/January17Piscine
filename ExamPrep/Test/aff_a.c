/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 21:41:09 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/31 21:44:16 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int v;

	i = 0;
	v = 0;
	if (ac != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (av[1][i])
	{
		if (av[1][i] == 'a')
			v = 1;
		i++;
	}
	if (v)
		write(1, "a\n", 2);
	else
		write(1, "\n", 2);
	return (0);
}
