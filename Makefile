# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tayeo <tayeo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 14:57:30 by tayeo             #+#    #+#              #
#    Updated: 2022/07/06 18:11:52 by tayeo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT=libft/libft.a

SRC=ft_printf.c format_str_parser.c put_uint.c put_hex.c

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
	gcc $? $(NAME) $(LIBFT) -o tester && ./tester

.PHONY: all bonus clean fclean re test
