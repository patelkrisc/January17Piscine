/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:27:10 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/17 22:55:32 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (!*to_find)
	{
		return (str);
	}
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			if (to_find[j + 1] != str[i + j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (0);
}
