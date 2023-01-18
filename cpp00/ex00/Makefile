NAME = megaphone

SRCS =	megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.cpp=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS)
	g++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all