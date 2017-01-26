/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 22:00:52 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/12 22:26:22 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int loop[3];

	loop[0] = 48;
	while (loop[0] <= 57)
	{
		loop[1] = loop[0] + 1;
		while (loop[1] <= 57)
		{
			loop[2] = loop[1] + 1;
			while (loop[2] <= 57)
			{
				ft_putchar(loop[0]);
				ft_putchar(loop[1]);
				ft_putchar(loop[2]);
				if (!(loop[0] == 55 && loop[1] == 56 && loop[2] == 57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				loop[2]++;
			}
			loop[1]++;
		}
		loop[0]++;
	}
}
