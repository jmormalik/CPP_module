NAME = Polymorphism
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
