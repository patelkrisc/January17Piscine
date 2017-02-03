/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:21:45 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/18 21:59:34 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char str1[] = "abcd";
	char str2[] = "abcd";
	int ret;
	int ret2;
		
	ret = ft_strcmp(str1, str2);
	printf("ft_strcmp(str1, str2) = %d\n", ret);
	ret2 = strcmp(str1, str2);
	printf("strcmp(str1, str2) = %d\n", ret2);
	return (0);
}
