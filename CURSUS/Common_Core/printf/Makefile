# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victofer <victofer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:35:46 by victofer          #+#    #+#              #
#    Updated: 2022/10/11 09:27:45 by victofer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC = ft_printf.c ft_print_c_str_int.c ft_print_unsigned.c \
		ft_print_hexa.c ft_print_ptr.c libft/*.c
OBJ= *.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	


.PHONY: clean fclean all re