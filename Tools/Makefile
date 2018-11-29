# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/16 18:35:26 by sarbaill          #+#    #+#              #
#    Updated: 2018/11/22 22:13:10 by sarbaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADERS = ./includes/
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)ft_putchar.c -I $(HEADERS)
	$(CC) $(FLAGS) -c $(SRC)ft_putstr.c -I $(HEADERS)
	$(CC) $(FLAGS) -c $(SRC)ft_strcmp.c -I $(HEADERS)
	$(CC) $(FLAGS) -c $(SRC)ft_strlen.c -I $(HEADERS)
	$(CC) $(FLAGS) -c $(SRC)ft_swap.c -I $(HEADERS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : fclean all re clean
