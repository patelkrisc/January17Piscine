/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 11:27:02 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/29 16:06:31 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	ft_putchar(char c);
void	ft_putnbr(int c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		oper(int ln, int rn, char op);
int		eval_expr(char *str);

#endif
