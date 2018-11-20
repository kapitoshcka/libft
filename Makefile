# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 10:47:49 by fkarnats          #+#    #+#              #
#    Updated: 2018/11/20 10:48:43 by fkarnats         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
INCLUDE = libft.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCS = *.c 

OBJ = *.o

all: $(NAME)

$(NAME): 
	$(CC)  $(FLAGS) $(SRCS)
	$(AR)  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
