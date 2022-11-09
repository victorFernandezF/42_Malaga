# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victofer <victofer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 10:35:37 by victofer          #+#    #+#              #
#    Updated: 2022/11/07 18:21:33 by victofer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME= minitalk
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC = server.c client.c
OBJ= *.o

# - COLOURS - 
GREEN=\033[0;32m
RED=\033[0;31m
BLUE=\033[0;34m
YELLOW = \033[0;93m
MAGENTA = \033[0;95m
END=\033[0m

# - MESSAGES - 
MSG_COMPILING = @echo "$(YELLOW) compilling ... $(END)"
MSG_LIBFT_HEADER = @echo "$(YELLOW)-------- LIBFT ----------$(END)"
MSG_MINITALK_HEADER = @echo "$(YELLOW)------- MINITALK --------$(END)"
MSG_MINITALK_OK = @echo "$(GREEN)⦿ minitalk compiled succesfully. ☺$(END)"
MSG_EVERYTHING_OK = @echo "$(GREEN)⦿ --- EVERYTHING COMPILED. ☺ ---$(END)"
MSG_CLEANING = @echo "$(YELLOW)Cleanning...$(END)"
MSG_CLEAN_LIBFT = @echo "$(YELLOW)-------- CLEAN LIBFT ----------$(END)"
MSG_CLEAN_MINITALK = @echo "$(YELLOW)------- CLEAN MINITALK --------$(END)"
MSG_EVERYTHIN_CLEANED = @echo "$(MAGENTA)⦿ Everything from Minitalk cleaned.$(END)"

all: $(NAME)

$(NAME): $(OBJ)
	$(MSG_COMPILING)
	sleep 1
	$(MSG_LIBFT_HEADER)
	$(MAKE) make-libft
	$(MSG_MINITALK_HEADER)
	ar -crs $(NAME) $(OBJ)
	$(MSG_MINITALK_OK)
	$(MSG_EVERYTHING_OK)
	
	
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)
	
make-libft:
	cd libft && $(MAKE)
	cd libft && $(MAKE) bonus
	
fclean-libft:
	cd libft && $(MAKE) fclean
		
clean:
	$(MSG_CLEANING)
	sleep 1
	$(MSG_CLEAN_LIBFT)
	$(MAKE) fclean-libft
	$(MSG_CLEAN_MINITALK)
	rm -f $(OBJ)
	$(MSG_EVERYTHIN_CLEANED)
	
	
fclean: clean
	rm -f $(NAME)
	

re: fclean all	

.SILENT: $(OBJS)
.PHONY: clean fclean all re