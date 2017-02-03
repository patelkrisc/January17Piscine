# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpatel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/29 14:28:50 by kpatel            #+#    #+#              #
#    Updated: 2017/01/29 14:37:33 by kpatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = ./srcs

HEAD = ./includes

GCC:
	gcc -Wall -Werror -Wextra

DEL = rm -rf

OUT = *.o

all: $(NAME)

$(NAME):
	$(GCC) $(SRC) -o $(NAME)

clean:
	$(DEL) $(OUT)

fclean: clean
	$(DEL) $(NAME)

re: fclean all
