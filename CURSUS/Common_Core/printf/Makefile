# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victofer <victofer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:35:46 by victofer          #+#    #+#              #
#    Updated: 2022/10/20 12:13:44 by victofer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libftprintf.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC = ft_printf.c ft_print_c_str_int.c ft_print_unsigned.c \
		ft_print_hexa.c ft_print_ptr.c libft/*.c
OBJ= *.o

# - COLOURS - 
GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
YELLOW = \033[0;93m
MAGENTA = \033[0;95m
END=\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
	@echo "$(GREEN)⦿ $@ compiled succesfully. ☺$(END)"
	
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)
	

clean:
	rm -f $(OBJ)
	@echo "$(MAGENTA)⦿ Everything cleaned.$(MAGENTA)"
	
fclean: clean
	rm -f $(NAME)

re: fclean all	

.SILENT: $(OBJS)
.PHONY: clean fclean all re