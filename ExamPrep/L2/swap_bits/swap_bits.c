/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 19:47:37 by kpatel            #+#    #+#             */
/*   Updated: 2017/02/02 11:53:11 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char base;

	base = 128;
	while (base > 0)
	{
		if (octet >= base)
		{
			write(1, "1", 1);
			octet -= base;
			base = base / 2;
		}
		else
		{
			write(1, "0", 1);
			base = base / 2;
		}
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned int a;
	unsigned int b;

	a = octet << 4;
	b = octet >> 4;
	a = a + b;
	return (a);
}

int		main(void)
{
	unsigned char byte;
	byte = 50;
	print_bits(byte);
	write(1, "\n", 1);
	print_bits(swap_bits(byte));
}
