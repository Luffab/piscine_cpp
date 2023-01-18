NAME = ex02
HEADERS =	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp
SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp
FLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.cpp=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -I. -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
