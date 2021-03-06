/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 22:34:05 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/27 22:34:11 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_letter(char letter)
{
	int		repeat;

	repeat = 1;
	if (letter >= 65 && letter <= 90)
		repeat = letter - 64;
	if (letter >= 97 && letter <= 122)
		repeat = letter - 96;
	return (repeat);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		repeat;

	i = 0;
	j = 0;
	repeat = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		repeat = ft_count_letter(av[1][i]);
		while (j < repeat)
		{
			write(1, &av[1][i], 1);
			j++;
		}
		j = 0;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
