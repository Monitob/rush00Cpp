
CC = g++

NAME = ft_retro

CFLAGS = -Wall -Wextra -Werror

SRC =  main.cpp Retro.class.cpp

DEPS = Retro.class.hpp

OBJ = $(SRC:.cpp=.o)

all: $(SRC) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)  -I ./

.o: $(SRC) $(DEPS)
	$(CC) -c $@


clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: fclean all
