/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 09:58:51 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/16 19:14:41 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_unpen(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char str1[] = "Hello, you";

	ft_print_unpen(str1);
	ft_putchar('\n');
}