/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:43:50 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/17 21:57:09 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	src[] = "Myung";
	char	dest[] = "Jae";
	int		n;
	
	n = 4;
	printf("Source = %s\n", src);
	printf("Original dest = %s\n", dest);
	printf("New dest = %s\n", ft_strncpy(dest, src, n));
	return (0);
}
