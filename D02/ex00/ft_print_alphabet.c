/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 12:38:13 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/12 22:50:33 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char b);

void	ft_print_alphabet(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		ft_putchar(b);
		b++;
	}
}