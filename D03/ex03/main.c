/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 10:51:18 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/14 11:31:02 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 11;
	b = 5;
	printf("a %d b %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d", div, mod);
	return (0);
}
