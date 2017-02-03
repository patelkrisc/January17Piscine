/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:12:13 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/31 18:12:22 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
int     main(int ac, char **av)
{
    int i;
    int j;
    i = 0;
    j = 0;
    if (ac != 4 || ft_strlen(av[2]) > 2 || ft_strlen(av[3]) > 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (av[1][i] != '\0')
    {
        if (av[1][i] == av[2][j])
        {
            av[1][i] = av[3][j];
        }
        i++;
    }
    ft_putstr(av[1]);
    ft_putchar('\n');
    return (0);
}
