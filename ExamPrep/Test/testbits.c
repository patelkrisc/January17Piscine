/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 11:32:59 by kpatel            #+#    #+#             */
/*   Updated: 2017/02/02 18:25:58 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
			octet = octet - base;
		}
		else
		{
			write(1, "0", 1);
		}
		base = base / 2;
	}
}

int main()
{
	unsigned char byte;

	byte = 42;
	print_bits(byte);
}
