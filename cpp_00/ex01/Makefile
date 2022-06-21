# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 19:06:32 by zihirri           #+#    #+#              #
#    Updated: 2022/06/21 18:32:08 by zihirri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pb

CFLAGS = -Wall -Wextra -Werror

CC = @g++

RM = @rm -rf

SRC =	Contact.cpp 	\
		PhoneBook.cpp 	\
		main.cpp		\

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[PHONEBOOK COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[PHONEBOOK REMOVED!]$(C_RES)"

re : fclean all