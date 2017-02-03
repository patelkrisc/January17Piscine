/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:47:16 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/19 15:56:56 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);

int		main(void)
{
	char *src;
	
	src = "AABBCC";
	printf("InitRes: %s\n", src);
	printf("FtRes: %s\n", ft_strdup(src));
}
