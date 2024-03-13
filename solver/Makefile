##
## EPITECH PROJECT, 2022
## makefile sokoban
## File description:
## sokoban
##
SRC = $(wildcard src/*.c) \
	$(wildcard lib/*.c)
OBJ = $(SRC:.c=.o)
TARGET = solver

$(TARGET) : $(OBJ)
	gcc -o $(TARGET) $(SRC) -g3

all : $(TARGET)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(TARGET)

re : fclean all
