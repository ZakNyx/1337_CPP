# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 17:26:06 by zihirri           #+#    #+#              #
#    Updated: 2022/08/05 12:41:25 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = @c++

RM = @rm -rf

SRC =	newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp	\
		main.cpp

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[ZOMBIE COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[ZOMBIE REMOVED!]$(C_RES)"

re : fclean all