NAME = PmergeMe

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CC = @c++

RM = @rm -rf

SRC =	main.cpp PmergeMe.cpp \
		
# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[BTC COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[BTC REMOVED!]$(C_RES)"

re : fclean all