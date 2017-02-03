/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 14:25:27 by kpatel            #+#    #+#             */
/*   Updated: 2017/02/01 22:39:36 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int		i;
	char	*arg;

	if (ac == 2)
	{
		i = -1;
		arg = av[1];
		while (*arg != '\0')
		{
			while (*arg == ' ' || *arg == '\t')
				arg++;
			if (i != -1 && *arg != '\0')
				write(1, " ", 1);
			i = 0;
			while (arg[i] != '\0' && arg[i] != ' ' && arg[i] != '\t')
				i++;
			write(1, arg, i);
			arg = arg + i;
		}
	}
	write(1, "\n", 1);
	return (0);
}