NAME = ex00
HEADERS =	includes/Animal.hpp \
			includes/Cat.hpp \
			includes/Dog.hpp \
			includes/WrongAnimal.hpp \
			includes/WrongCat.hpp
SRCS =	main.cpp \
		srcs/Animal.cpp \
		srcs/Cat.cpp \
		srcs/Dog.cpp \
		srcs/WrongAnimal.cpp \
		srcs/WrongCat.cpp
FLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.cpp=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -I includes -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
