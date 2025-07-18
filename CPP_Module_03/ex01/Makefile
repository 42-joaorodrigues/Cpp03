NAME	= ex01
CC		= c++
FLAGS	= -Werror -Wextra -Wall -std=c++98 -g
RM		= rm -rf

SRC		= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp
OBJ		= $(SRC:%.cpp=obj/%.o)

all: $(NAME)

obj/%.o : %.cpp
	mkdir -p obj
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	$(RM) obj

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
