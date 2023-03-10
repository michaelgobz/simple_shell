CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = hsh
CFLAGS = -Wall -Werror -Wextra -pedantic
RM = rm -f
.PHONY: all clean oclean fclean re

betty compliance:
     $(betty *.c)
all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) *~
	$(RM) *.swp
	$(RM) $(NAME)
oclean:
	$(RM) $(OBJ)
fclean:
	$(RM) *~
	$(RM) *.swp
	$(RM) $(NAME)
	$(RM) $(OBJ)
re: fclean all
