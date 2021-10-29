##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell find src/ -name '*.c')

TEST= 	src/my_put_nbr.c 		\
		src/my_putchar.c 		\
		src/eval_expr.c  		\
		src/summands.c 			\
		src/factor.c 			\
		src/number.c 			\
		tests/test_eval_expr.c 	\
		tests/test_my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

TNAME	=	unit_tests


RM	=	rm -f

CFLAGS	=	 -g3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(CFLAGS)
	$(RM) $(OBJ)

tests_run:	$(TEST)
			gcc -o $(TNAME) $(TEST) -lcriterion --coverage
			./unit_tests

clean:
		rm -f $(OBJ)
		rm -f src/*~
		rm -f *~
		rm -f *.gc*

fclean: 	clean
		rm -f $(NAME)
		rm -f $(TNAME)

re:		fclean all

.PHONY: all fclean