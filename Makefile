CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g
NAME    = push_swap
HEADER	= push_swap.h
SRC = \
	main.c \
	parsing.c \
	split.c \
	ft_atol.c \
	check_it.c \
	error.c \
	push_to_stack.c \
	pars_utils.c\
	strjoin.c\
	free.c\
	stack.c\
	operation2.c\
	operation3.c\
	operation4.c algo.c hardcode_sorting.c operation.c

OBJ = $(SRC:.c=.o)

INCLUDES = -I.

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)
  
fclean: clean
	rm -f $(NAME)

re: fclean all
