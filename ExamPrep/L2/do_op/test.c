/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 16:53:15 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/31 17:01:34 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(char *na, char *op, char *nb)
{
	int n1;
	int n2;
	int o;

	n1 = atoi(na);
	n2 = atoi(nb);
	o = 0;
	if (op[0] == '+')
		o = n1 + n2;
	else if (op[0] == '-')
		o = n1 - n2;
	else if (op[0] == '*')
		o = n1 * n2;
	else if (op[0] == '/')
		o = n1 / n2;
	else if (op[0] == '%')
		o = n1 % n2;
	printf("%d", o);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	else
		printf("\n");
	return (0);
}
