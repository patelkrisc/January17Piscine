/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 12:45:26 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/27 12:51:09 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
}
