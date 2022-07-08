# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 14:57:30 by tayeo             #+#    #+#              #
#    Updated: 2022/07/08 16:24:01 by tayeo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC=ft_printf.c format_str_parser.c put_uint.c put_hex.c basic_utils.c ft_putnbr.c

OBJ = ${SRC:.c=.o}
FLAG = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $@ $?
	ranlib $(NAME)

%.o: %.c
	gcc -c $(FLAG) $?

clean:
	rm -f $(OBJ) $(BOBJ) tester

fclean: clean
	rm -f $(NAME) tester

re: fclean all

test: src_test.c
	gcc $? $(NAME) -o tester && ./tester

.PHONY: all bonus clean fclean re test
