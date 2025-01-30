NAME = push_swap

LIBFT = libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c parsing_input.c

OBJ = $(SRC:.c=.o)

AR = ar -rc

RM = rm -rf

all : $(LIBFT) $(NAME)

$(NAME) : $(OBJ) push_swap.h
	$(CC) $(OBJ) $(LIBFT) -o $(NAME)  

$(LIBFT) :
	make -C libft

clean :
	make -C libft clean
	$(RM) $(OBJ)

fclean : clean
	make -C libft fclean
	$(RM) $(NAME)

re : fclean all

.PHONY : re clean fclean

