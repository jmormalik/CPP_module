NAME = Weapon
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = HumanA.cpp HumanA.hpp HumanB.cpp HumanB.hpp main.cpp Weapon.cpp Weapon.hpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
