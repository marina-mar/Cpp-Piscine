NAME = human_brain

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) Brain.cpp Human.cpp main.cpp
	clang++ Brain.o Human.o main.o -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
