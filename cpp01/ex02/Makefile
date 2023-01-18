NAME = ex02
SRCS =	main.cpp

FLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.cpp=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS)
	c++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all