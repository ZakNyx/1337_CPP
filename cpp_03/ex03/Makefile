NAME = clap

CFLAGS = -Wall -Wextra -Werror 

CC = @c++

RM = @rm -rf

SRC =	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp


# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[DIAMOND COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[DIAMOND REMOVED!]$(C_RES)"

re : fclean all