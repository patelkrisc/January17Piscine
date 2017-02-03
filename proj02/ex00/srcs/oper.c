/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:41:26 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/29 17:13:29 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		oper(int ln, int rn, char op)
{
	if (op == '+')
		return (ln + rn);
	else if (op == '-')
		return (ln - rn);
	else if (op == '*')
		return (ln * rn);
	else if (op == '/')
		return (ln / rn);
	else if (op == '%')
		return (ln % rn);
	else
		return (0);
}
