# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victofer <victofer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:35:46 by victofer          #+#    #+#              #
#    Updated: 2022/10/04 11:37:57 by victofer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC = ft_printf.c
OBJ= $(SRC:.c=*.o)
#BONUS = 
#BONUS_OBJ =$(BONUS:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)


bonus: $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	


.PHONY: clean fclean all re bonus
