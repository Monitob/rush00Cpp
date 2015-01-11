
CPP = g++

NAME = ft_retro

CFLAGS =  -l ncurses

SRC =  main.cpp Character.class.cpp Collision.class.cpp Enemy.class.cpp

DEPS = Retro.class.hpp

OBJ = $(SRC:.cpp=.o)

all: $(SRC) $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(SRC) -o $(NAME)  -I ./

.o: $(SRC) $(DEPS)
	$(CPP) -c $@


clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: fclean all
