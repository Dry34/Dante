##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Dante
##

generator =	generator/

solver	=	solver/

all	:	$(OBJ)
		make -C $(generator)
		make -C $(solver)

clean	:
		make clean -C $(generator)
		make clean -C $(solver)

fclean	:	clean
		make fclean -C $(generator)
		make fclean -C $(solver)

re	:	fclean all
