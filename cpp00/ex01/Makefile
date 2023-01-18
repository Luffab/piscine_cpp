NAME = phonebook
HEADER_FILE = ./include
HEADERS = $(HEADER_FILE)/Repertory.hpp
SRCS =	srcs/Contact.cpp \
		srcs/Utils.cpp \
		srcs/PhoneBook.cpp \
		srcs/main.cpp \

FLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.cpp=.o}

.PHONY: all
.PHONY: clean
.PHONY: fclean
.PHONY: re

$(NAME): $(OBJS)
	g++ $(OBJS) -o $(NAME)

$(OBJS): %.o: %.cpp $(HEADERS)
	g++ $(FLAGS) -I$(HEADER_FILE) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
