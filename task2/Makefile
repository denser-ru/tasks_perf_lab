#
# Created by denser on 27.01.2022.
#

NAME	= task2
CC		= g++
FLAGS	= -std=c++14 -Wall -Wextra -Werror

INCDIR	= ./
SRCDIR	= ./

INCS	= Circle.hpp
SRCS	= main.cpp Circle.cpp

SRC		= $(addprefix $(SRCDIR), $(SRCS))
INC		= $(addprefix $(INCDIR), $(INCS))

all: $(NAME)

$(NAME): $(SRC) $(INC)
	$(CC) $(FLAGS) -I $(INCDIR) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all