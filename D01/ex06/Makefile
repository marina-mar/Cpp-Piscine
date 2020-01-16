NAME = weapon

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
	clang++ Weapon.o HumanA.o HumanB.o main.o -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
