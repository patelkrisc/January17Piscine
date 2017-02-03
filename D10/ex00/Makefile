# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 11:09:06 by kpatel            #+#    #+#              #
#    Updated: 2017/01/23 16:31:22 by kpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/{ft_putchar.c,ft_putstr.c,ft_swap.c,ft_strcmp.c,ft_strlen.c}

OUT = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

HEADER = includes/libft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADER)
	ar rc  $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
