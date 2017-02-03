/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 21:50:03 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/19 22:07:27 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

int	*ft_range(int **range, int min, int max);

int main() 
{
	int* res;
	int i;
	
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
	printf("%d,", res[i]);
	printf("\n");
	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
	printf("%d,", res[i]);
	printf("\n");
	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
	printf("%d,", res[i]);
	printf("\n");
	res = ft_range(10, 5);
	printf("%x\n", (unsigned int)res);


return 0; 
}
