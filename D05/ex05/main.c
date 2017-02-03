/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:23:21 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/17 22:54:12 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main (void)
{
	char largestring[] = "Foo Bar XYZ ABC DFG";
	char ft_smallstring[] = "Bar";
	char libc_smallstring[] = "XYZ";
	
	char *libc_ptr;
	char *ft_ptr;
	ft_ptr = ft_strstr(largestring, ft_smallstring);
	libc_ptr = strstr(largestring, libc_smallstring);
	printf("Libc: %s\nMine: %s", libc_ptr, ft_ptr);
}
