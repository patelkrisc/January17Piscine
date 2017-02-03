/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 19:11:29 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/31 19:17:39 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;

	div = 128;
	while (div != 0)
	{
		if (div <= octet)
		{
			write(1, "1", 1);
			octet = octet % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}

int main(void)
{
	unsigned char octet;

	octet = 4;
	print_bits(octet);
}
