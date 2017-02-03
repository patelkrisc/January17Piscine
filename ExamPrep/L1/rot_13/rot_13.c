/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:32:10 by kpatel            #+#    #+#             */
/*   Updated: 2017/02/01 19:36:22 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	replace(char k)
{
	if ((k >= 65 && k <= 77) || (k >= 97 && k <= 109))
	{
		k += 13;
		return (k);
	}
	if ((k >= 78 && k <= 90) || (k >= 110 && k <= 122))
	{
		k -= 13;
		return (k);
	}
	else
	{
		return (k);
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	k;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
	}
	while (av[1][i] != '\0')
	{
		k = replace(av[1][i]);
		ft_putchar(k);
		i++;
	}
	ft_putchar('\n');
}
