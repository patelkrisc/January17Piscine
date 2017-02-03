
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 22:31:47 by kpatel            #+#    #+#             */
/*   Updated: 2017/01/27 22:32:06 by kpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	int			len;
	char		*arg;

	if (argc == 2)
	{
		arg = argv[1];
		while (*arg == ' ' || *arg == '\t')
			arg++;
		len = 0;
		while (arg[len] != '\0' && arg[len] != ' ' && arg[len] != '\t')
			len++;
		write(1, arg, len);
	}
	write(1, "\n", 1);
	return (0);
}
