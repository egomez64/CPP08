NAME = find

GXX = c++

CFALGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GXX) $(CFALGS) $^ -o $@

%.o: %.cpp
	$(GXX) $(CFALGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re