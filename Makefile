NAME = push_swp.a

CC = cc

CFLAGS = gcc -Wall -Wextra -Werror

SRC =

OBJ = $(SRC:.c=.o)

AR = ar -rc

RM = rm - rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : re clean fclean

