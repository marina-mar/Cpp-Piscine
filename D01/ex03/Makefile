NAME = zombies

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) Zombie.cpp ZombieHorde.cpp main.cpp
	clang++ Zombie.o ZombieHorde.o main.o -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
