NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) Enemy.class.cpp GameObject.class.cpp MeleeEnemy.class.cpp RangeEnemy.class.cpp main.cpp -o $(NAME) -g

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all