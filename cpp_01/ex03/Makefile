NAME = violence

CFLAGS = -Wall -Wextra -Werror 
CC = @c++

RM = @rm -rf

SRC =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp 

# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_BLUE = \033[1;34m
C_RES = \033[0m

all : $(NAME)
$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(C_GREEN)[VIOLENCE COMPILED!]$(C_RES)"
	
fclean:	
	$(RM) -f $(NAME)
	@echo "$(C_RED)[VIOLENCE REMOVED!]$(C_RES)"

re : fclean all