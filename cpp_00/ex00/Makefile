# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 15:37:26 by zihirri           #+#    #+#              #
#    Updated: 2022/08/01 20:16:10 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror

CC = @c++

RM = @rm -rf

SRC = megaphone.cpp

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[MEGAPHONE COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[MEGAPHONE REMOVED!]$(C_RES)"

re : fclean all