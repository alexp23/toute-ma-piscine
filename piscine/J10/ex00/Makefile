# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apietrul <apietrul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/18 11:07:31 by apietrul          #+#    #+#              #
#    Updated: 2015/08/18 18:46:00 by apietrul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: libft.a

all: libCompile
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

libCompile:
	gcc -Wall -Wextra -Werror -c -Iincludes ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all
