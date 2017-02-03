/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:45:16 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/28 19:48:18 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int flag;
	int	nb;

	i = 0;
	flag = 1;
	nb = 0;
	if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			nb = nb * 10 + str[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (nb * flag);
}