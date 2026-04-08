NAME = harlFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Harl.cpp main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
