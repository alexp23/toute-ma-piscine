#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/28 03:12:48 by vpelissi          #+#    #+#              #
#    Updated: 2015/05/07 18:11:15 by vpelissi         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = list

SOURCES = list.c\
			ft_put.c\
			main.c\

OBJECTS = $(SOURCES:.c=.o)

HEADERS = includes/list.h 

FLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
