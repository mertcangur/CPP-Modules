NAME = animal

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = g++

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	@$(CPP) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re
