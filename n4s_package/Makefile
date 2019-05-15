CC	=	gcc

SRC =	./src/info.c \
		./src/move.c \
		./src/lib.c \
		./src/move_back.c \
		./src/main.c

LDFLAGS =	-Wall -Wextra -Werror

OBJ =	$(SRC:.c=.o)

NAME	=	ai

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:		fclean all
