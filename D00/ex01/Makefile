NAME = ringing

FLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) my_phonebook.cpp contact_info.class.cpp
	clang++ my_phonebook.o contact_info.class.o -o ringing

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all