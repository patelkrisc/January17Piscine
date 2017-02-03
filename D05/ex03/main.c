/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:45:45 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/17 12:44:38 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[100];
	char src[40];

	ft_strcpy(src, "What's all dat chocolate doin' on your face?");
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
