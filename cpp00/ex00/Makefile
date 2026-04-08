NAME = MegaPhone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = MegaPhone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
