# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/25 11:49:10 by apietrul          #+#    #+#              #
#    Updated: 2015/08/25 12:56:22 by apietrul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
SRCO = objects/ft_putchar.o objects/ft_putstr.o objects/ft_strcmp.o objects/ft_strlen.o objects/ft_swap.o
SRC_o_d = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

NAME = lib/libft.a

all : compile
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
	ls
	ls objects
	ls lib

compile :
	gcc -c -Wall -Werror -Wextra $(SRC)
	mv $(SRC_o_d) objects/

clear :
	rm -f $(NAME)

clear_o :
	rm -f $(SRCO)

clear_all : clear
	rm -f $(SRCO)

re : clear_all all
